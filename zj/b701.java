public class b701{
	static int N , S , W , E , A , n , m;
	static int [] y = { 1 , 0 , -1 ,  0 };
	static int [] x = { 0 , 1 ,  0 , -1 };
	public static void search(int [][] map , int _y , int _x){
		map[_y][_x] = 0 ; A++;
		S = S > _y ? S : _y;
		N = N < _y ? N : _y;
		E = E > _x ? E : _x;
		W = W < _x ? W : _x;
		int i;
		for(i = 0 ; i < 4 ; i++)
			if(_y + y[i] >= 0 && _y + y[i] < n &&
					_x + x[i] >= 0 && _x + x[i] < m)
				if(map[_y + y[i]][_x + x[i]] == 1)
					search(map , _y + y[i]  , _x + x[i]);
		return;
	}
	public static void main(String[] args){
		java.util.Scanner sc = new java.util.Scanner(System.in);
		n = sc.nextInt() ; m = sc.nextInt();
		int i , j;
		int [][] map = new int[n][m];
		for(i = 0 ; i < n ; i++)
			for(j = 0 ; j < m ; j++)
				map[i][j] = sc.nextInt();
		for(i = 0 ; i < n ; i++)
			for(j = 0 ; j < m ; j++)
				if(map[i][j] == 1){
					A = 0 ; N = S = i ; W = E = j ; search(map , i , j);
					System.out.println(W + " " + N + " " + E + " "
							+ S + " " + A);
				}
		return;
	}
}
