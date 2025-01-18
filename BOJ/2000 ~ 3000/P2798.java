// https://www.acmicpc.net/problem/2798
import java.io.*;
import java.util.StringTokenizer;

public class P2798 {
    public static void main(String[] args) throws IOException {
        InputStreamReader isr = new InputStreamReader(System.in);
        BufferedReader br = new BufferedReader(isr);
        StringTokenizer st = new StringTokenizer(br.readLine());

        int n = Integer.parseInt(st.nextToken());
        int m = Integer.parseInt(st.nextToken());

        int[] cards = new int[n];
        st = new StringTokenizer(br.readLine());
        for (int i=0; i<n; i++) {
            cards[i] = Integer.parseInt(st.nextToken());
        }

        int result = 0;
        for (int i=0; i<cards.length; i++) {
            for (int j=0; j<cards.length; j++) {
                if (i == j) continue;
                for (int k=0; k<cards.length; k++) {
                    if (i == k || j == k) continue;
                    int sum = cards[i] + cards[j] + cards[k];
                    if (sum <= m) {
                        if (sum > result) {
                            System.out.println("cards[i] = " + cards[i] + " cards[j] = " + cards[j] + " cards[k] = " + cards[k]);
                            result = sum;
                        }
                    }
                }
            }
        }
        System.out.println(result);
    }
}
