import java.math.BigInteger;
import java.util.Scanner;
class Main {
	public static void main(String[]args){
		String linea = new Scanner(System.in).next();
		BigInteger b = new BigInteger(linea, 2);
		b = b.multiply(new BigInteger("17"));
		System.out.println(b.toString(2));
	}
}
