import java.util.HashSet;
import java.util.Scanner;
import java.util.Set;
class Main{
	public static void main(String[]args){
            Scanner teclado = new Scanner(System.in);
            Set<Character> li =  new HashSet<Character>();
            li.clear();
            int cnt=0;
            while(teclado.hasNext()){
                int a = teclado.nextInt(); int b = teclado.nextInt();
                for(int i=a; i<=b; i++){
                    String v = ""+i;
                    for(int j=0; j<v.length(); j++){
                        li.add(v.charAt(j));
                    }
                    
                    if(li.size() == v.length())
                        cnt++;
                        li.clear();
                }
                System.out.println(cnt); cnt=0;
            }
        } 
}