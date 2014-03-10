import java.util.Scanner;

class Main{
	public static void main(String[] args){
		Scanner in = new Scanner(System.in);
		while(in.hasNextInt()){
			int i = in.nextInt();
			int j = in.nextInt();
			System.out.print(i + " " + j + " ");
			int may = 0;
			if(i > j){
				int aux = i;
				i = j;
				j = aux;
			}
			for(int k = i; k <= j; k++){
				int a = algoritmo(k, 0);
				if(a > may)
					may = a;
			}
			System.out.println(may);
		}
	}
	public static int algoritmo(int n, int c)
	{
		if(n != 1)
			if(n % 2 == 1)
				return algoritmo(3 * n + 1, c + 1) ;
			else
				return algoritmo(n / 2, c + 1);
		return c + 1;
	}
}