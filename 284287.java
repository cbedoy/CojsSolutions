import java.math.BigInteger;
import java.util.Scanner;

/**
 *
 * @author CarlosBedoy
 */
class Main {
    public static void main(String[]args){
        Scanner teclado = new Scanner(System.in);
        BigInteger bg;
        String lineaSalida="";
        do{
            String entrada = teclado.next();
            if(entrada.equals("0")) break;
            bg = new BigInteger(entrada);
            if(bg.mod(new BigInteger("11")).intValue() == 0)
                lineaSalida+=entrada+" is a multiple of 11.-";
            else
                lineaSalida+=entrada+" is not a multiple of 11.-";
        }while(true);
        String lineas[] = lineaSalida.split("-");
        for(int i=0; i<lineas.length; i++){
            System.out.println(lineas[i]);
        }
    }
}