import java.util.Scanner;

class Main {
    public static void main(String[]args){
        Scanner teclado = new Scanner(System.in);
        int n = teclado.nextInt();
        int total=0;
        while(n-- !=0){
            int v = teclado.nextInt();
            String l = Integer.toBinaryString(v);
            for(int i=0; i<l.length(); i++){
                if(l.charAt(i)=='1')total++;
            }
        }
        System.out.println(total);
    }
}
