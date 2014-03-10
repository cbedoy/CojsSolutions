import java.util.Scanner;

/**
 *
 * @author Carlos Bedoy
 */
class Main {
    public static void main(String[]args){
        Scanner teclado = new Scanner(System.in);
        int sob=0;
        
        while(teclado.hasNext()){
            int v = teclado.nextInt();
            int vv=0;
            for(char t : Integer.toBinaryString(v).toCharArray()){
                if(t=='1')vv++; 
            }
            if(vv%2 == 0)sob++;
        }
        System.out.println(sob);
    }
}
