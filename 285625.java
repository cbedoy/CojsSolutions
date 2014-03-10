import java.util.Collections;
import java.util.Scanner;
import java.util.Vector;

/**
 *
 * @author CarlosBedoy
 */
class Main {
    public static void main(String[]args){
        Scanner teclado = new Scanner(System.in).useDelimiter("\n");
        int n = teclado.nextInt();
        Vector<Integer> v = new Vector<Integer>();
        for(int i=0; i<n; i++){
            int vv = teclado.nextInt();
            v.add(vv);
            Collections.sort(v);
        }
        for(int eleme : v)
            System.out.println(eleme);
    
    }
}
