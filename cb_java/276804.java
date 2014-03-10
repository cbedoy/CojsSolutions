import java.util.Scanner;
import java.util.StringTokenizer;

class Main {
    public static void main(String[]args){
        Scanner teclado =  new Scanner(System.in);
        teclado.useDelimiter("\n");
        String linea = teclado.next();
        StringTokenizer st = new StringTokenizer(linea);
        int a = Integer.parseInt(st.nextToken());
        long b = Long.parseLong(st.nextToken());
        System.out.println(""+((a+b) + (a-b) + (b+a) + (b-a)));
    }
}