import java.util.NoSuchElementException;
import java.util.Scanner;
import java.util.StringTokenizer;

class Main {
	public static void main(String[]args){
		Scanner teclado = new Scanner(System.in);
		teclado.useDelimiter("\n");
		int a = 0, b, c;
		do{
			String linea = teclado.next();
			StringTokenizer st = new StringTokenizer(linea);
			try{
				a = Integer.parseInt(st.nextToken());
				b = Integer.parseInt(st.nextToken());
				c = Integer.parseInt(st.nextToken());
				if(((a*a)+(b*b) - c*c) == 0){
					System.out.println("right");
				}else if(((a*a)+(c*c)) - (b*b) == 0 ){
					System.out.println("right");
				}else if(((a*a)-(b*b)) - (c*c) == 0){
					System.out.println("right");
				}else{
					System.out.println("wrong");
				}
			}catch(NoSuchElementException e){
			}
		}while(a!=0);
	}
}
