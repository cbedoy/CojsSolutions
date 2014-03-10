import java.util.Collections;
import java.util.LinkedList;
import java.util.Scanner;


class Main {
	public static void main(String[]args){
		String linea = new Scanner(System.in).next();
		LinkedList<Character> conjunto = new LinkedList<Character>();
        char[] letras = linea.toCharArray();
        for (char el : letras) {
            conjunto.add(el);
        }
        
        Collections.sort(conjunto);
        for(int i=0; i<conjunto.size(); i++){
        	System.out.print(conjunto.get(i));
        }
	}
}