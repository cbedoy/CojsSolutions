import java.util.Scanner;

/**
 *
 * @author CarlosBedoy
 */
class Main {
    public static void main(String[]args){
        Scanner teclado = new Scanner(System.in);
        String entrada1="", entrada2="";
        String salidas="";
        entrada1=teclado.next();
        entrada2=teclado.next();
        do{
            int bits = 0;
            for(int i=0; i<entrada1.length(); i++){
                if(entrada1.charAt(i) != entrada2.charAt(i))
                    bits++;
            }
            salidas+="Hamming distance is "+bits+"._";
            entrada1=teclado.next();
            if(entrada1.equals("X")) break;
            entrada2=teclado.next();
            
        }while(true);
        
        for(String e: salidas.split("_")){
            System.out.println(e);
        }
    }
}