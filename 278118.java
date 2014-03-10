import java.math.BigInteger;
import java.util.Scanner;

/**
 *
 * @author acmupb
 */
class Main {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic here
        Scanner teclado  = new Scanner(System.in);
        int n =  teclado.nextInt();
        BigInteger num[] = new BigInteger[n];

    for(int  i  = 0; i<n; i++){
            String linea =  teclado.next();


            num[i] = new BigInteger(linea);
        }
        BigInteger div =  new BigInteger("4");
        for(int  i  = 0; i<n; i++){
            BigInteger val =  num[i].mod(div);
            int valor = val.intValue();
            if(valor == 0){
                System.out.println("YES");
            }else{
                System.out.println("NO");
            }
        }
    }

}
