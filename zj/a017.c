#include<stdio.h>
#include<stdlib.h>
#include<memory.h>
#include<string.h>
#define N 100
int back_shell[N] = {0};
int fore_shell[N] = {0};
int mark , shellptr = 0; 
int shell[N] , now ; 
int newline_ptr = 0 , line_ptr = 0;
char ch , oprater[N] , line[100] , newline[100];
void reset(void);
void calculate(int* ,char* , int* );
void reviseline(void);
void if_add_fore_mark(int mark);
void linecpy(int);
void lineinsert(char);
void readline(char *input);
int main(void){
	while(1){
		reset();
		if(!fgets(line , sizeof(line) , stdin)) break ;
//		if(line[0] == 'q' || line[0] == 'e') puts("goodbye !") , exit(0);
//		printf("origin-> %s" , line);
		reviseline();
//		printf("add( )-> %s", newline);		
		readline(newline);
	}
	return 0;
}
void reset(void){
	now = 0 ,  mark = 0 , shellptr = 0;
	newline_ptr = 0 , line_ptr = 0;
	memset(shell , 0 , sizeof(shell));
	memset(oprater , '+' , sizeof(oprater));
	memset(back_shell , 0 , sizeof(back_shell));
	memset(fore_shell , 1 , sizeof(fore_shell));
	memset(newline , 0 , sizeof(newline));
	memset(line , 0 , sizeof(line));
	return;
}
void reviseline(void){
	int insert;

	for(mark = 0; mark <= strlen(line); mark++){
		if(line[mark] == '('){
			if((line[mark-1]>=48 && line[mark-1]<=57) || line[mark-1] == ')'){
				for(insert = strlen(line) ; insert >= mark ; insert--){
					line[insert+1] = line[insert];
				}
				line[mark] = '*';
			}
		}
		if(line[mark] == ')'){
			if((line[mark+1]>=48 && line[mark+1]<=57) || line[mark+1] == '('){
				 for(insert = strlen(line) ; insert >= mark+1 ; insert--){
					 line[insert+1] = line[insert];
				 }
				 line[mark+1] = '*';
			}
		}
	}
//	printf("add * -> %s",line);

	for(mark = 0; mark <= strlen(line); mark++){
		if(line[mark] == '+' || line[mark] == '-' || line[mark] == '\n'){
			fore_shell[shellptr] = 0;
			linecpy(mark-1);//
			if(back_shell[shellptr]>0){
				lineinsert(')');
			}
			linecpy(mark);
		}
		else if(line[mark] == '*' || line[mark] == '/' || line[mark] == '%'){
			if(!fore_shell[shellptr]){
				lineinsert('(');
			}
			linecpy(mark);
		}
		else if(line[mark] == '('){
	//		if((line[mark-1]>=48 && line[mark-1]<=57) || line[mark-1] == 41)
	//			lineinsert('*');
			if_add_fore_mark(mark);
			shellptr++;
		}
		else if(line[mark] == ')'){
			if(back_shell[shellptr]>0){
				linecpy(mark);
				while(back_shell[shellptr]>0){
					lineinsert(')');
				}
			}
			else linecpy(mark);
			fore_shell[shellptr] = 1;//
			shellptr--;
			if(shellptr<0) puts("lost (") , exit(0);
		}
	}	
}
void if_add_fore_mark(int mark){
	int add_shell = 0;
	int i;
	if(fore_shell[shellptr] == 0){
		for( i = mark ; ; i++ ){
			if ( line[i] == '(' )
				add_shell++;
			else if ( line[i] == ')' )
				add_shell--;
			else if ((line[i] == '+' || line[i] == '-' || line[i] == '\n')&&(add_shell <= 0))
				break;
			else if ((line[i] == '*' || line[i] == '/' || line[i] == '%')&&(add_shell <= 0)){
				lineinsert('(');
				break;
			}
		}
	}
	return;
}
void linecpy(int to_num){
	for( ; line_ptr <= to_num ; line_ptr++){
		newline[newline_ptr] = line[line_ptr];
		newline_ptr++;
	}
	return;
}
void lineinsert(char ch){
	newline[newline_ptr] = ch;
	newline_ptr++;
	if(ch == '('){
		back_shell[shellptr]++;
		fore_shell[shellptr] = 1;
	}
	else if(ch == ')')
		back_shell[shellptr]--;
	return;
}
void readline(char *input){
	int n = 0, ptr = 0;
	while(~sscanf(input + ptr , "%c%n" , &ch , &n)){
		ptr += n;
		if(ch == '\n'){
			calculate(&shell[shellptr] , &oprater[shellptr] , &now);
			!shellptr ? : puts("lost )");
//			shell[0] == (int)shell[0] ?  printf("%.0f\n",shell[0]): printf("%d\n",shell[0]);
			printf("%d\n",shell[0]);
			break;
		}
		else if(ch == '+' || ch == '-' || ch == '/' || ch == '*' || ch == '%'){
			calculate(&shell[shellptr] , &oprater[shellptr] , &now);
			oprater[shellptr] = ch;
		}
		else if(ch >= '0' && ch <= '9')
			now = now*10 + (ch - '0');
		else if(ch == '(')
			shellptr++;
		else if(ch == ')'){	
			calculate(&shell[shellptr] , &oprater[shellptr] , &now);
			calculate(&shell[shellptr-1] , &oprater[shellptr-1] , &shell[shellptr]);
			shellptr--;
			if(shellptr < 0) puts("lost (") , exit(0);
		}
		else if(ch == ' ');
		else{
			puts("wrong number or operater");
//			scanf("%*s\n");
			break;
		}
	}
	return;
}
void calculate(int *num0,char *op, int *num1){
	switch(*op){
		case '+':
			*num0 += *num1;
			break;
		case '-':
			*num0 -= *num1;
			break;
		case '*':
			*num0 *= *num1;
			break;
		case '/':
			*num0 /= *num1;
			break;
	}
	if(*op == '%'){
//		printf("%d\n",*num0);
//		if(! (*num1 == (int)(*num1)))
//			printf("%d is not integer, can't use %%\n" , *num1) , exit(0);
//		if(! (*num0 == (int)(*num0)))
//			printf("%d will be transformed into integer\n" , *num0);
		(*num0) = (int)(*num0) % (int)(*num1);
	}
	*num1 = 0;
	*op = '+';
	return;
}
