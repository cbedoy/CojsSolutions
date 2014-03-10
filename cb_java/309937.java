import java.util.Scanner;

class Main {
    public static void main(String[]args){
        Scanner teclado = new Scanner(System.in).useDelimiter("\n");
        do{
            String linea = teclado.next();
            if(linea.equals("#")) break;
            linea=linea.replace("%", "%25");	linea=linea.replace(" ", "%20");
            linea=linea.replace("!", "%21");	linea=linea.replace("$", "%24");
            linea=linea.replace("(", "%28");	linea=linea.replace(")", "%29");
            linea=linea.replace("*", "%2a");	System.out.println(linea);
        }while(true);
        
    }
}