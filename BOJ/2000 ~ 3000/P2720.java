// https://www.acmicpc.net/problem/2720

import java.math.BigDecimal;
import java.math.RoundingMode;
import java.util.Scanner;

public class P2720 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        for(int i=0; i<t; i++) {
            BigDecimal change = sc.nextBigDecimal();
            change = change.multiply(new BigDecimal("0.01"));

            System.out.println("[before] p1 change:: " + change);
            BigDecimal p1 = change.divide(new BigDecimal("0.25"), RoundingMode.FLOOR);
            int quarter = p1.intValue();
            change = change.subtract(new BigDecimal(String.valueOf(quarter * 0.25)));

            System.out.println("[before] p2 change:: " + change);
            BigDecimal p2 = change.divide(new BigDecimal("0.1"), RoundingMode.FLOOR);
            int dime = p2.intValue();
            change = change.subtract(new BigDecimal(String.valueOf(dime * 0.1)));

            System.out.println("[before] p3 change:: " + change);
            BigDecimal p3 = change.divide(new BigDecimal("0.05"), RoundingMode.FLOOR);
            int nickel = p3.intValue();
            change = change.subtract(new BigDecimal(String.valueOf((nickel * 0.05))));

            System.out.println("[before] p4 change:: " + change);
            BigDecimal p4 = change.divide(new BigDecimal("0.01"), RoundingMode.FLOOR);
            int penny = p4.intValue();

            System.out.println(quarter + " " + dime + " " + nickel + " " + penny);
        }
    }
}
