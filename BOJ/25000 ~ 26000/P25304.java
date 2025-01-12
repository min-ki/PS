// https://www.acmicpc.net/problem/25304
import java.util.*;
import java.io.*;

public class P25304 {
    public static void main(String[] args) throws IOException {
        InputStreamReader isr = new InputStreamReader(System.in);
        BufferedReader br = new BufferedReader(isr);
        StringTokenizer st = new StringTokenizer(br.readLine());

        long x = Long.parseLong((st.nextToken())); // 영수증 총 금액

        st = new StringTokenizer(br.readLine());
        int n = Integer.parseInt(st.nextToken()); // 물건의 갯수

        long price = 0L;
        for (int i = 0; i < n; i++) {
            st = new StringTokenizer(br.readLine());
            long a = Long.parseLong(st.nextToken());
            long b = Long.parseLong(st.nextToken());

            price += a * b;
        }
        System.out.println(x == price ? "Yes" : "No");
    }
}
