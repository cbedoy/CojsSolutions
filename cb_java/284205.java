import java.math.BigInteger;
import java.util.Scanner;

class Main{
    public static void main(String[]args){
        Scanner teclado = new Scanner(System.in);
        int n = teclado.nextInt();
        BigInteger valor;
        String salida="", entrada="";
        for(int i=0; i<n; i++){
            entrada =teclado.next();
            valor = new BigInteger(entrada);
            if(valor.mod(new BigInteger("495")).intValue() == 0)
                salida+="YES ";
            else 
                salida+="NO ";
            
        }
        String listas[] = salida.split(" ");
        for(int i=0; i<n; i++){
            System.out.println(listas[i]);
        }
    }
}