import java.util.ArrayList;
import java.util.Scanner;

/**
 *
 * @author Carlos
 */
class Main {
    public static void main(String[]arg){
        Scanner teclado = new Scanner(System.in);
        ArrayList<Integer> l = new ArrayList<Integer>();
        for(int i=0; i<5; i++){
                String cad = teclado.next();
                if(cad.contains("FBI"))
                    l.add(i+1);

        }
        if(l.isEmpty())System.out.println("HE GOT AWAY!");
        else 
            for(Integer i: l)
                System.out.println(i);
    }
}
