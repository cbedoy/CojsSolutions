import java.math.BigInteger;
import java.util.Scanner;
class Main {
	public static void main(String[]args){
		String linea = new Scanner(System.in).next();
		BigInteger b = new BigInteger(linea, 2);
		System.out.println(b.multiply(new BigInteger("17")).toString(2));
	}
}