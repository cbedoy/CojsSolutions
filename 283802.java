import java.util.Scanner;


class Main {
	public static String lineaSalida=""; 
	public static void toTercerio(int n){
		if (n!=0){
	        toTercerio(n/3);
	        lineaSalida+=""+n%3;
	    }
		
	}
	
	public static void main(String[]args){
		Scanner teclado = new Scanner(System.in);
		do{
			int n = teclado.nextInt();
			if(n<0) break;
			toTercerio(n);
			lineaSalida+=" ";
		}while(true);
		String lineas[]=lineaSalida.split(" ");
		for(int i=0; i<lineas.length; i++)
			System.out.println(lineas[i]);
	}
}