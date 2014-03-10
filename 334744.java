import java.util.Scanner;
import java.util.StringTokenizer;

public class Main {

    static String[][] mm = new String[25][20]; static String direccion; static int[] tamano;    static int columna;

    static void caracteres(char c, int t) { for (int i = 0; i < t; i++) {System.out.print(c);     }}

    static void impre(char c1, char c2) {System.out.print(c1); for (int i = 0; i < columna; i++) {
            if (i != 0) {System.out.print(c2);} caracteres('-', tamano[i] + 2);}
        System.out.println(c1);
    }

    static void imprimir(int r) {int le, ri, wrd, i;System.out.print('|');for (i = 0; i < columna; i++) {
            if (i != 0) {  System.out.print('|');}
            wrd = mm[r][i].length();  switch (direccion.charAt(i)) {
                case '<':
                                    le = 1;
                    ri = tamano[i] - wrd + 1;
                    break;
                case '>':
                    le = tamano[i] - wrd + 1;
                    ri = 1;
                    break;
                default:
                    le = (tamano[i] - wrd) / 2 + 1;
                    ri = tamano[i] + 2 - wrd - le;
                    break;
            }
            caracteres(' ', le);
            System.out.print(mm[r][i]);
            caracteres(' ', ri);
        }
        System.out.println('|');
    }

    public static void main(String args[]) {
        String l, cad;
        int ii, jj, sz, i, j;
        char c;
        Scanner in = new Scanner(System.in);
        l = in.nextLine();
        while (true) {
            if (l.equals("*")) {
                break;
            }
            direccion = l;
            columna = l.length();
            tamano = new int[columna];
            jj = 0;
            while (true) {
                l = in.nextLine();
                c = l.charAt(0);
                if (c == '<' || c == '>' || c == '=' || c == '*') {
                    break;
                }
                StringTokenizer st = new StringTokenizer(l, "&");
                for (ii = 0; st.hasMoreTokens(); ii++) {
                    cad = st.nextToken();
                    mm[jj][ii] = cad;
                    sz = cad.length();
                    if (sz > tamano[ii]) {
                        tamano[ii] = sz;
                    }
                }
                jj++;
            }
            impre('@', '-');
            imprimir(0);
            impre('|', '+');
            for (j = 1; j < jj; j++) {
                imprimir(j);
            }
            impre('@', '-');
        }
    }
}