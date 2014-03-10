import java.util.Scanner;

class Main {

    public static void main(String[] args) {
        int n, i, c, casos, L;
        char cad[] = new char[110];
        Scanner teclado = new Scanner(System.in);
        casos = teclado.nextInt();
        for (c = 1; c <= casos; c++) {
            cad = teclado.next().toCharArray();
            n = teclado.nextInt();
            L = cad.length;
            for (i = 0; i < L && n > 0; i++) {
                if (cad[i] == '1') {
                    cad[i] = '2';
                    n--;
                }
            }
            for (i = L - 1; i >= 0 && n > 0; i--) {
                if (cad[i] == '0') {
                    cad[i] = '3';
                    n--;
                }
            }
            for (i = 0; i < L; i++) {
                if (cad[i] > '1') {
                    cad[i] -= 2;
                }
            }
            System.out.println("Case #" + c + ": " + new String(cad));

        }
    }
}