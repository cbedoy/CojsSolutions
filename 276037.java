import java.text.DecimalFormat;
import java.util.Scanner;
class Main {
	public static void main(String[]args){
		float suma=0;
		DecimalFormat formateador = new DecimalFormat("########.##");
		Scanner teclado = new Scanner(System.in);
		for(int i=0; i<12; i++){
			suma+=teclado.nextFloat();
		}
		System.out.println("$"+formateador.format(suma/12));
	}
}