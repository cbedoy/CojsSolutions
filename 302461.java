import java.math.BigInteger;
import java.util.Scanner;
class Main {
    public static void main(String[]args){
        Scanner teclado = new Scanner(System.in);
        int n = teclado.nextInt();
        for(int i=0; i<n; i++){
            BigInteger a = teclado.nextBigInteger();
            BigInteger b = teclado.nextBigInteger();
            System.out.println(a.multiply(b));
        }
    }
}