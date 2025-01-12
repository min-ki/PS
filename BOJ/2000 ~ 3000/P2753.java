// https://www.acmicpc.net/problem/2753
// 윤년 = leap year
//
import java.util.*;

public class P2753 {
    public static boolean isLeapYear(int year) {
        if (year % 4 != 0) return false;
        return (year % 100 != 0) || (year % 400 == 0);
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int year = sc.nextInt();
        if (isLeapYear(year)) {
            System.out.println(1);
        } else {
            System.out.println(0);
        }
    }
}
