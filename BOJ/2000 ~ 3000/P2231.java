// https://www.acmicpc.net/problem/2231

import java.util.Scanner;

public class P2231 {

    public static int sumDigit(int num) {
        int result = 0;
        while (num > 0) {
            result += num % 10;
            num = num / 10;
        }
        return result;
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String input = sc.nextLine();
        int targetNum = Integer.parseInt(input);

        for (int i = targetNum - (input.length() * 9); i <= 1_000_000; i++) {
            int base = i;
            base += sumDigit(i);
            if (base == targetNum) {
                System.out.println(i);
                return;
            }
        }

        System.out.println(0);
    }
}
