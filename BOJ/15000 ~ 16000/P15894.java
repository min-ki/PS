// https://www.acmicpc.net/problem/15894

import java.io.*;

public class P15894 {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        // 입력의 범위가 (1 <= n <= 10^9)이므로 최대 40억을 넘길 수 있다.
        // int로 하면 입력범위가 -21억 ~ 21억이므로 long으로 해야한다.
        long n = Long.parseLong(br.readLine());
        System.out.println(n * 4);
    }
}
