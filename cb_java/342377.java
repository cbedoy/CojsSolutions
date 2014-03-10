import java.math.BigInteger;
import java.util.Scanner;


public class Main {

    public static void main(String[] args) {
        Scanner teclado = new Scanner(System.in);
        int n = teclado.nextInt();
        for(int i=0; i<n; i++){
            BigInteger a = teclado.nextBigInteger();
            if(a.mod(new BigInteger("2")).intValue()==0)
                System.out.println("even");
            else
                System.out.println("odd");
        }
    }
}