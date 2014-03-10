import java.util.Scanner;

/**
 *
 * @author CarlosBedoy
 */
class Main {
    public static void main(String[]args){
        Scanner teclado = new Scanner(System.in);
        int n = teclado.nextInt();
        int total[] = new int[n];
        for(int i=0; i<n; i++){
            int nar = teclado.nextInt();
            total[i] = nar;
            for(int j=0; j<3; j++){
                total[i] +=3;
                total[i] *=2;
            }
        }
        for(int i=0; i<n; i++){
            System.out.println(total[i]);
        }
    }
    
}