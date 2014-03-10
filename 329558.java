import java.math.BigInteger;
import java.util.ArrayList;
import java.util.Collections;
import java.util.List;
import java.util.Scanner;


/**
 *
 * @author CarlosBedoy
 */
class Main {
    public static void main(String[]args){
        Scanner teclado = new Scanner(System.in);
        BigInteger b;
        List<Long> ll = new ArrayList<Long>();
        int n = teclado.nextInt();
        for(int i=0; i<n; i++){
            String c = teclado.next();
            ll.add(Long.parseLong(new StringBuilder(c).reverse().toString()));
        }
        Collections.sort(ll);
        for(int i=0; i<n; i++){
            System.out.println(ll.get(i));
        }
    }
}