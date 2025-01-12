// https://www.acmicpc.net/problem/2675

import java.util.Scanner;

public class P2675 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int t = Integer.parseInt(sc.nextLine());

        for (int i=0; i<t; i++) {
            int r = sc.nextInt();
            String word = sc.next();

            char[] characters = word.toCharArray();
            StringBuilder sb = new StringBuilder();
            for (char c: characters) {
                for (int j=0; j<r; j++) {
                    sb.append(c);
                }
            }

            System.out.println(sb);
        }
    }
}
