import java.util.Scanner;
import java.util.Stack;

/**
 *
 * @author CarlosBedoy
 */
class Main{
    public static void main(String[]args){
        Scanner teclado = new Scanner(System.in);
        Stack<Integer> pila = new Stack();
        do{
            int n = teclado.nextInt();
            pila.add(n);
            if(n==42){
                n = teclado.nextInt();
                pila.add(n);
                break;
            }
        }while(true);
        for(int i=0; i<pila.size(); i++){
            if(pila.get(i)==42){
                break;
            }else{
                System.out.println(pila.get(i));
            }
        }
    }
}