import java.util.NoSuchElementException;
import java.util.Scanner;
import java.util.StringTokenizer;


class Main {
    public static void main(String[]args){
        String linea = new Scanner(System.in).useDelimiter("\n").next();
        StringTokenizer st = new StringTokenizer(linea);
        String tipo="";
        long a=0, b=0;
        try{
            tipo = st.nextToken();
            a= Long.parseLong(st.nextToken());
            b= Long.parseLong(st.nextToken());
        }catch(NoSuchElementException e){
            
        }
        
        if(tipo.equals("square")){
            System.out.println(a*a);
        }else{
            System.out.println(a*b);
        }
    }
}