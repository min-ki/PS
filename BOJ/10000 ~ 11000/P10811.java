// https://www.acmicpc.net/problem/10811

import java.util.*;
import java.io.*;

public class P10811 {
    public static void main(String[] args) throws IOException {
        InputStreamReader isr = new InputStreamReader(System.in);
        BufferedReader br = new BufferedReader(isr);
        StringTokenizer st = new StringTokenizer(br.readLine());

        // N M
        int n = Integer.parseInt(st.nextToken());
        int m = Integer.parseInt(st.nextToken());

        // N개 바구니 만들기
        int[] baskets = new int[n+1];

        // init basket
        for (int i=1; i<=n; i++) {
            baskets[i] = i;
        }

        for (int i=1; i<=m; i++) {
            st = new StringTokenizer(br.readLine());

            int iBasket = Integer.parseInt(st.nextToken());
            int jBasket = Integer.parseInt(st.nextToken());
            int[] temp = new int[jBasket - iBasket + 1];
            for (int k = iBasket; k <= jBasket; k++) {
                temp[k - iBasket] = baskets[k];
            }

            for(int k = iBasket; k <= jBasket; k++) {
                baskets[k] = temp[jBasket - k];
            }
        }

        for (int i=1; i<=n; i++) {
            if (i != n) {
                System.out.print(baskets[i] + " ");
            } else {
                System.out.print(baskets[i]);
            }
        }
    }
}
