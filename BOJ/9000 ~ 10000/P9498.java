// https://www.acmicpc.net/problem/9498

import java.util.Scanner;

public class P9498 {

    public static char calculateGrade(int score) {
        char grade;

        if (score >= 90) grade = 'A';
        else if (score >= 80) grade = 'B';
        else if (score >= 70) grade = 'C';
        else if (score >= 60) grade = 'D';
        else grade = 'F';

        return grade;
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int score = sc.nextInt();
        System.out.println(calculateGrade(score));
    }
}
