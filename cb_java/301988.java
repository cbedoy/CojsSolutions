import java.util.Scanner;

/**
 *
 * @author CarlosBedoy
 */
class Main {
    public static void main(String[]args){
        Scanner teclado  = new Scanner(System.in);
        String linea="";
        int val[] = new int[]{1, 2, 6, 24, 120};
        do{
            int j=0, r=0;
            linea=teclado.next();
            if(linea.equals("0")) break;
            for(int i=linea.length()-1; i>=0; i--){
                r+=Integer.parseInt(linea.charAt(i)+"")*val[j];
                j++;
            }
            System.out.println(r);
            
        }while(true);
    }
}
