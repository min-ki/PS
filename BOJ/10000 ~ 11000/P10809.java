// https://www.acmicpc.net/problem/10809

import java.util.Scanner;

public class P10809 {
    public static void main(String[] args) {
        char[] alphabet = "abcdefghijklmnopqrstuvwxyz".toCharArray();
        Scanner sc = new Scanner(System.in);
        String word = sc.next();

        for (int i=0; i<alphabet.length; i++) {
            char c = alphabet[i];
            int idx = word.indexOf(c);
            if (i == alphabet.length - 1) {
                System.out.print(idx);
            } else{
                System.out.print(idx + " ");
            }
        }
    }
}
