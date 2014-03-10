import java.util.Scanner;
/**
 *
 * @author CarlosBedoy
 */
class Main {
    public static void main(String[]args){
        Scanner teclado = new Scanner(System.in);
        int n = teclado.nextInt();
        String salidas[] = new String[n];
        for(int i=0; i<n; i++){
            String g = teclado.next();
            String fech = teclado.next();
            String fechaS[] = fech.split("/");
            if(fechaS[0].length() == 1)
                fechaS[0]="0"+fechaS[0];
            if(fechaS[1].length() == 1)
                fechaS[1]="0"+fechaS[1];
            String city = teclado.next();
            String aux="";
            for(int j=0; j<4-city.length(); j++){
                aux+="0";
            }
            city=aux+city;
            
            aux="";
            for(int j=0; j<4-fechaS[2].length(); j++){
                aux+="0";
            }
            fechaS[2]=aux+fechaS[2];
            aux="";
            String country = teclado.next();
            for(int j=0; j<3-country.length(); j++){
                aux+="0";
            }
            country=aux+country;
            aux="";
            String ran = teclado.next();
            for(int j=0; j<4-ran.length(); j++){
                aux+="0";
            }
            ran=aux+ran;
            salidas[i]=g+"-"+fechaS[2]+"-"+fechaS[1]+"-"+fechaS[0]+"-"+city+"-"+country+"-"+ran;
            
        }
        for(String e:salidas)
            System.out.println(e);
    }
    
}
