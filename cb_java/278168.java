import java.math.BigInteger;
import java.util.Scanner;

/*
 * To change this template, choose Tools | Templates
 * and open the template in the editor.
 */

/**
 *
 * @author CarlosBedoy
 */
class Main {
    public static void main(String[]args){
        Scanner teclado = new Scanner(System.in);
        int n = teclado.nextInt();
        BigInteger[] num = new BigInteger[n];
        BigInteger val = new BigInteger("6");
        BigInteger res;
        for(int i=0; i<n; i++){
            String linea = teclado.next();
            num[i] = new BigInteger(linea);
        }
        for(int i = 0; i<n; i++){
            res = num[i].mod(val);
            int rl = res.intValue();
            if(rl == 0){
                System.out.println("YES");
            }else{
                System.out.println("NO");
            }
        }
        
        
        
    }
}