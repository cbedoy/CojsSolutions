import java.util.Scanner;
class Main {

    public static void main(String args[]) {
        int players, size, cards;
        String board, card;
        int[] pos = new int[4];
        int i, j, player;
        boolean win;
        Scanner in = new Scanner(System.in);
        while (true) {
            players = in.nextInt();
            size = in.nextInt();
            cards = in.nextInt();
            if (players == 0) {
                break;
            }
            board = in.next();
            win = false;
            pos[0] = pos[1] = pos[2] = pos[3] = -1;
            for (i = 0; i < cards; i++) {
                card = in.next();
                if (!win) {
                    player = i % players;
                    for (j = 0; j < card.length() && !win; j++) {
                        pos[player] = board.indexOf(card.charAt(j), pos[player] + 1);
                        if (pos[player] < 0 || pos[player] == (size - 1)) {
                            win = true;
                            System.out.println("Player " + (player + 1)
                                    + " won after " + (i + 1) + " cards.");
                        }
                    }
                }
            }
            if (!win) {
                System.out.println("No player won after " + cards + " cards.");
            }
        }
    }
}