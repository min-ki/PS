// https://www.acmicpc.net/problem/2525

import java.io.*;
import java.util.*;

public class P2525 {
    public static void main(String[] args) throws IOException {
        InputStreamReader isr = new InputStreamReader(System.in);
        BufferedReader br = new BufferedReader(isr);
        StringTokenizer st = new StringTokenizer(br.readLine());

        // 시작 시간
        int startHour = Integer.parseInt(st.nextToken());
        int startMinute = Integer.parseInt(st.nextToken());

        // 요리하는 필요한 시간
        st = new StringTokenizer(br.readLine());
        int cookTime =  Integer.parseInt(st.nextToken());

        // 시작 시간을 분으로 환산
        int startedAtInMinute = startHour * 60 + startMinute;

        // 자정
        int midnight = 60 * 24;

        int finishedAtInMinute = startedAtInMinute + cookTime;

        if (finishedAtInMinute >= midnight) {
            finishedAtInMinute = finishedAtInMinute - midnight;
        }

        // 분 -> 시:분으로 환산
        int finishedHour = finishedAtInMinute / 60;
        int finishedMinute = finishedAtInMinute % 60;

        System.out.println(finishedHour + " " + finishedMinute);
    }
}
