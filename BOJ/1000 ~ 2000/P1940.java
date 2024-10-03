import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.Arrays;
import java.util.StringTokenizer;

/**
 * 주몽의 명령
 */

public class P1940 {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

        int N = Integer.parseInt(br.readLine());
        int M = Integer.parseInt(br.readLine());

        int[] arr = new int[N];
        StringTokenizer st = new StringTokenizer(br.readLine());
        for (int i = 0; i < N; i++) {
            arr[i] = Integer.parseInt(st.nextToken());
        }

        // 오름차순 정렬
        Arrays.sort(arr);
        int start = 0;
        int end = N - 1;
        int count = 0;

        while (start < end) {
            if (arr[start] + arr[end] > M) end--;
            else if (arr[start] + arr[end] < M) start++;
            else {
                start++;
                end--;
                count++;
            }
        }

        System.out.println(count);
        br.close();
    }
}
