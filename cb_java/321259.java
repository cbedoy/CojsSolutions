import java.util.Arrays;
import java.util.HashSet;
import java.util.Scanner;
import java.util.Set;

public class Main {
    public static void main(String[] args) {
        Scanner teclado = new Scanner(System.in);
        Set<String> lista = new HashSet<String>();
        int n = teclado.nextInt();
        for(int i=0; i<n; i++){
            String linea = teclado.next();
            lista.addAll(Arrays.asList(linea.split("")));
            System.out.println(lista.size()-1);
            lista.clear();
        }
    }
}