// https://www.acmicpc.net/problem/10813
import java.io.*;
import java.util.*;

public class P10813 {
    public static void main(String[] args) throws IOException {
        InputStreamReader isr = new InputStreamReader(System.in);
        BufferedReader br = new BufferedReader(isr);
        StringTokenizer st = new StringTokenizer(br.readLine());

        int n = Integer.parseInt(st.nextToken());
        int m = Integer.parseInt(st.nextToken());
        int[] basket = new int[n+1];

        // init basket
        for (int i=1; i<=n; i++) {
            basket[i] = i;
        }

        // swap
        for (int i=0; i<m; i++) {
            st = new StringTokenizer(br.readLine());
            int iBasket = Integer.parseInt(st.nextToken());
            int jBasket = Integer.parseInt(st.nextToken());

            int temp = basket[iBasket];
            basket[iBasket] = basket[jBasket];
            basket[jBasket] = temp;
        }

        for (int i=1; i<=n; i++) {
            if (i != n) {
                System.out.print(basket[i] + " ");
            } else {
                System.out.print(basket[i]);
            }
        }
    }
}
