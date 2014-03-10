import java.util.ArrayList;
import java.util.Arrays;
import java.util.HashSet;
import java.util.List;
import java.util.Scanner;

/**
 *
 * @author CarlosBedoy
 */
class Main {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic here
        List<Character> dieta = new ArrayList<Character>();
        Scanner teclado = new Scanner(System.in);
        int n = teclado.nextInt();
        HashSet<Character> h = new HashSet<Character>();
        for (int i = 0; i < n; i++) {
            String l = teclado.next();
            for (int j = 0; j < l.length(); j++) {
                h.add(l.charAt(j));
            }
            String a = teclado.next();
            String b = teclado.next();
            boolean error = false;
            boolean remove = false;
            for (int j = 0; j < a.length(); j++) {
                remove = h.remove((Character) a.charAt(j));
                if (!remove) {
                    error = true;
                    j=a.length()+1;
                }
            }
            if (!error) {
                for (int j = 0; j < b.length(); j++) {
                    remove = h.remove((Character) b.charAt(j));
                    if (!remove) {
                        error = true;
                        j=a.length()+1;
                    }
                }
            }
            if (!error) {
                Object[] toArray = h.toArray();
                Arrays.sort(toArray);
                l = "";
                for (int j = 0; j < toArray.length; j++) {
                    l += toArray[j];
                }
                System.out.println(l);
            } else {
                System.out.println("CHEATER");
            }
            h.clear();
        }
        


    }
}
