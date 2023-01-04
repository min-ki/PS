import java.util.Scanner;

public class BOJ10992 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String nextLine = sc.nextLine();
        int parseInt = Integer.parseInt(nextLine);

        for (int i = 1; i <= parseInt; i++) {
            for (int j = parseInt - i - 1; j >= 0; j--) {
                System.out.print(" ");
            }

            int repeatCnt = (2 * i) - 1;

            for (int j = 0; j < repeatCnt; j++) {
                if (i != parseInt && j > 0 && j < (repeatCnt - 1)) {
                    System.out.print(" ");
                } else {
                    System.out.print("*");
                }
            }
            System.out.println();
        }

        sc.close();
    }
}
