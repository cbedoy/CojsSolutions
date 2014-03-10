import java.util.Scanner;

 class Main {
	public static void main(String[]arg){
		Scanner teclado = new Scanner(System.in);
		String a = teclado.next();
		String b = teclado.next();
		String r1="", r2="", r3="";
		for(char x : a.toCharArray()){
			if(!b.contains(x+"")){
				r1+=x;
			}
		}
		for(char x : b.toCharArray()){
			if(!a.contains(x+"")){
				r2+=x;
			}else{
				r3+=x;
			}
		}
		

		System.out.println("First:"+r1);
		System.out.println("Second:"+r2);
		System.out.println("First&Second:"+r3);
	}
}
