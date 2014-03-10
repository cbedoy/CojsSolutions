
import java.math.BigInteger;
import java.util.Scanner;

class Main {
    public static void main(String[]args){
        Scanner teclado = new Scanner(System.in);
        int n = teclado.nextInt();
        BigInteger b = new BigInteger("2");
        System.out.println(b.pow(n));
    }
}