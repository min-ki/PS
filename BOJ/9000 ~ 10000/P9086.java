// https://www.acmicpc.net/problem/9086

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class P9086 {
    public static void main(String[] args) throws IOException {

        InputStreamReader isr = new InputStreamReader(System.in);
        BufferedReader br = new BufferedReader(isr);

        int n = Integer.parseInt(br.readLine());

        for (int i=0; i<n; i++) {
            String word = br.readLine();
            char[] charArray = word.toCharArray();
            String result = "" + charArray[0] + charArray[word.length() - 1];
            System.out.println(result);
        }
    }
}
