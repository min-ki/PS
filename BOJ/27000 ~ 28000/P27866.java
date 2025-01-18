// https://www.acmicpc.net/problem/27866

import java.util.Scanner;

public class P27866 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String word = sc.nextLine();
        int idx = Integer.parseInt(sc.nextLine());
        char[] characters = word.toCharArray();
        System.out.println(characters[idx - 1]);
    }
}
