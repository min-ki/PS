// https://www.acmicpc.net/problem/5597

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class P5597 {
    public static void main(String[] args) throws IOException {
       int[] arr = new int[31];
        InputStreamReader isr = new InputStreamReader(System.in);
        BufferedReader br = new BufferedReader(isr);

       for(int i=1; i<=28; i++) {
           int studentNo = Integer.parseInt(br.readLine());
           arr[studentNo] = 1;
       }

       for (int i=1; i<=30; i++) {
           if (arr[i] == 0) {
               System.out.println(i);
           }
       }
    }
}
