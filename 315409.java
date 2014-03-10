import java.text.DecimalFormat;
import java.util.Scanner;
class Main {
    public static void main(String[] args) {
        int t; float a, b; Scanner teclado = new Scanner(System.in);
        t = teclado.nextInt();
        for(int i=0; i<t; i++){
        a = teclado.nextFloat(); b = teclado.nextFloat();
        DecimalFormat df = new DecimalFormat(".00000000");
        System.out.println(df.format(((a*b)/16)*3));
        }
    }
}
