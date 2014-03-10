import java.util.Scanner;


class Main {
	public static String lineaSalida=""; 
	public static void toTercerio(int n){
		if (n!=0){
	        toTercerio(n/2);
	        lineaSalida+=""+n%2;
	    }
		
	}
	
	public static void main(String[]args){
		Scanner teclado = new Scanner(System.in);
		String lineaFin="";
		do{
			int n = teclado.nextInt();
			if(n==0) break;
			toTercerio(n);
			lineaSalida+=" ";
		}while(true);
		String lineas[]=lineaSalida.split(" ");
		int nn;
		for(int i=0; i<lineas.length; i++){
			nn=0;
			for(int j=0; j<lineas[i].length(); j++){
				if(lineas[i].charAt(j) == '1'){
					nn++;
				}
			}
			lineaFin+="The parity of "+lineas[i]+" is "+nn+" (mod 2).-";
		}
		String lineasFin[] = lineaFin.split("-");
		for(int i=0; i<lineas.length; i++){
			System.out.println(lineasFin[i]);
		}
	}
}