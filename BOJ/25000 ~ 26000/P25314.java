// https://www.acmicpc.net/problem/25314
import java.util.Scanner;

public class P25314 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int N = sc.nextInt();
        int numOfLong = N / 4;

        StringBuilder sb = new StringBuilder();
        for (int i= 0; i < numOfLong; i++) {
            if (sb.length() == 0) {
                sb.append("long");
            } else {
                sb.append(" long");
            }
        }

        sb.append(" int");
        System.out.println(sb);
    }
}
