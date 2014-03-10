import java.util.HashMap;
import java.util.Scanner;

/**
 *
 * @author CarlosBedoy
 */
class Main {
    public static void main(String[]args){
        Scanner teclado = new Scanner(System.in);
        HashMap map = new HashMap();
        for(int i=0; i<10; i++){
            int val=teclado.nextInt();
            map.put(val%42, val%=42);
        }
        System.out.println(map.size());
        
    }
}