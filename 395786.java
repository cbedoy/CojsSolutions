import java.util.Scanner;

/**
 *
 * @author Carlos Bedoy
 */
class Main {
    public static void main(String[]args){
        Scanner teclado = new Scanner(System.in);
        int n = teclado.nextInt();
        while((n--) != 0){
            int k = teclado.nextInt();
            int suma=0;
            for(int i=0; i<k; i++){
                int q = teclado.nextInt();
                suma+=q;
            }
            System.out.println(suma-(k-1));
        }
    }
}
