import java.util.Scanner;

public class Main {
    static int maximo, k;
    static int punto(int x) {return x % 3;}
    static int[][] T = new int[6][4];
    static void buscar(int dt, int lvl, int sum) {
        int i, j;
        if (lvl == 6) {
            if ((dt == T[0][k]) && (sum > maximo)) {
                maximo = sum;
            }
        } else {
            for (i = 1; i < 6; i++) {
                if (T[i][3] == 1) {
                    for (j = 0; j < 3; j++) {
                        if (dt == T[i][j]) {
                            T[i][3] = 0;
                            buscar(T[i][punto(j + 1)], lvl + 1, sum + T[i][punto(j + 2)]);
                            T[i][3] = 1;
                        }
                    }
                }
            }
        }
    }

    public static void main(String args[]) {
        String ch;
        int i;
        Scanner in = new Scanner(System.in);
        do {
            for (i = 0; i < 6; i++) {T[i][0] = in.nextInt();T[i][1] = in.nextInt();T[i][2] = in.nextInt(); T[i][3] = 1;}
            ch = in.next();
            maximo = -1;
            for (k = 0; k < 3; k++)buscar(T[0][punto(k + 1)], 1, T[0][punto(k + 2)]);
            if (maximo < 0)System.out.println("none");else System.out.println(maximo);
        } while (ch.equals("*"));
    }
}