import java.util.Scanner;

/**
 *
 * @author Carlos
 */
class Main {
    public static void main(String[]Arg){
        Scanner teclado = new Scanner(System.in);
        int n, t;
        int num[] = new int[12]; 
        n = teclado.nextInt();
        String cad;
        while(n-- !=0){
            t = teclado.nextInt();
            cad = teclado.next();
            String  cads[] = cad.split("/");
            num[Integer.parseInt(cads[1])-1]++;
        }
        for(int i=0; i<num.length; i++){
            System.out.println((i+1)+" "+num[i]);
        }
    }
}
