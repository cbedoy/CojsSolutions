import java.util.Arrays;
import java.util.Scanner;
public class Main {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int n,m,i;
		Nodo g[];
		while(true){
			n=sc.nextInt();
			m=sc.nextInt();
			if(n==0&&m==0)
				break;
			g=new Nodo[m];
			for(i=0;i<m;i++)
				g[i]=new Nodo(sc.next());
			Arrays.sort(g);
			for(i=0;i<m;i++)
				System.out.println(g[i]);
			System.out.println();
		}
	}
}
class Nodo implements Comparable<Nodo>{
	String cad;
	int s;
	Nodo(String cad){
		this.cad=cad;
		s=0;
		char a;
		for(int i=0;i<cad.length();i++){
			a=cad.charAt(i);
			for(int j=i+1;j<cad.length();j++){
				if(cad.charAt(j)<a)
					s++;
			}
		}
	}
	@Override
	public int compareTo(Nodo o) {
		if(this.s<o.s)
			return -1;
		if(this.s>o.s)
			return 1;
		return this.cad.compareTo(o.cad);
	}
	@Override
	public String toString() {
		return cad;
	}
}