import java.math.BigInteger;
import java.util.Scanner;

/**
 *
 * @author CarlosBedoy
 */
class Main {
    public static void main(String[]args){
        int n = new Scanner(System.in).nextInt();
        BigInteger base = new BigInteger("2");
        System.out.println(base.pow(n));
    }
}