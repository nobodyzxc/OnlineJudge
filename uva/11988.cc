#include<cstdio>
#include<cstdlib>
typedef struct _node{
    int val;
    struct _node * nxt;
} node;
char pos;
node *h = NULL , *t = NULL , *p = NULL;
void insert(int ch){
    if(h == NULL) pos = 'h';
    if(pos == 't')
        t->nxt = (node *)malloc(sizeof(node)) ,
        t = t->nxt , t->val = ch , t->nxt = NULL;
    else if(pos == 'h')
        pos = 'm' , p = (node *)malloc(sizeof(node)) ,
        p->val = ch , p->nxt = h , h = p , t = p->nxt ? t : p;
    else{
        node *m = (node *)malloc(sizeof(node));
        m->val = ch , m->nxt = p->nxt , p->nxt = m;
        p = m , t = p->nxt ? t : p;
    }
}

void del(){
    node *it , *de = NULL;
    for(it = h ; it ; it = it->nxt)
        free(de) ,  de = it;
    free(de);
    h = t = p = NULL , pos = 'h';
    return;
}

void show(){
    for(node *it = h ; it ; it = it->nxt)
        printf("%c" , it->val); puts("");
}

int main(void){
    pos = 'h';
    char ch;
    while((ch = getchar()) != EOF){
        if(ch == '\n') show() , del();
        else if(ch == '[') pos = 'h';
        else if(ch == ']') pos = 't';
        else insert(ch);
    }
    return 0;
}
