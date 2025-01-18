// https://www.acmicpc.net/problem/3052

import java.io.*;
import java.util.HashSet;
import java.util.Set;

public class P3052 {
    public static void main(String[] args) throws IOException {

        InputStreamReader isr = new InputStreamReader(System.in);
        BufferedReader br = new BufferedReader(isr);
        Set<Integer> items = new HashSet<>();

        for (int i=0; i<10; i++) {
            int n = Integer.parseInt(br.readLine());
            items.add(n % 42);
        }
        System.out.println(items.size());
    }
}
