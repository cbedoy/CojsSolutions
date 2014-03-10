import java.text.DecimalFormat;
import java.util.HashMap;
import java.util.Scanner;

/**
 *
 * @author CarlosBedoy
 */
class Main {


    public static void main(String[] args) {
        Scanner teclado = new Scanner(System.in).useDelimiter("\n");
        String linea = teclado.next();
        DecimalFormat f= new DecimalFormat(".00"); 
        String[] split = linea.split(" ");
        if(split[0].endsWith("circle")){
            System.out.println(f.format(Math.pow(Double.parseDouble(split[1]),2)*3.14));
        }else{
            System.out.println(f.format((Double.parseDouble(split[1])*Double.parseDouble(split[2])/2)));
        }
        
            
    }
}
