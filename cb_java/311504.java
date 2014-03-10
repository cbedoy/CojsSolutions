import java.util.Scanner;

/**
 *
 * @author CarlosBedoy
 */
class Main {
    public static void main(String[]args){
        Scanner teclado = new Scanner(System.in).useDelimiter("\n");
        int n=teclado.nextInt();
        String LineaSalida="";
        for(int i = 0; i<n; i++){
            LineaSalida="";
            String entrada = teclado.next();
            String lineas[] = entrada.split(" ");
            for(int j=lineas.length-1; j>=1; j--){
                LineaSalida+=lineas[j]+"*";
            }
            LineaSalida = LineaSalida.substring(0, LineaSalida.length()-1);
            String num1 = lineas[0].substring(0,2);
            String num2 = lineas[0].substring(2,4);
            System.out.println(num1+""+LineaSalida+""+num2);
        }
        
        
    }
}
