import java.util.Arrays;
import java.util.Scanner;
class Main {
    public static void main(String[] args) {
        Scanner teclado = new Scanner(System.in);
        int a, n = teclado.nextInt();
        int v[]= new int[n];
        for(int i=0; i<n; i++) v[i]=teclado.nextInt();
        Arrays.sort(v);
        for(int i=0; i<n; i++) System.out.println(v[i]); 
    }
}