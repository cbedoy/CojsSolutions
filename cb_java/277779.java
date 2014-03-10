import java.util.Scanner;
import java.util.StringTokenizer;


class Main {
    public static void main(String[]args){
        int sal = 0, a=0, b=0;
        Scanner teclado = new Scanner(System.in);
        teclado.useDelimiter("\n");
        String linea="";
        String salida = "";
        StringTokenizer st;
        do{
            linea = teclado.next();
            st = new StringTokenizer(linea);
            a = Integer.parseInt(st.nextToken());
            b = Integer.parseInt(st.nextToken());
            salida += (a+b)+" ";
            
        }while(a!=0 && b!=0);
        st = new StringTokenizer(salida);
        do{
            int xl = Integer.parseInt(st.nextToken());
            if(xl==0){sal = 1;}else{ System.out.println(xl);}
        }while(sal != 1);
    }
}