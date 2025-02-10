import java.util.Scanner;

public class P24264 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        long n = sc.nextLong();

        long operations = n * n;
        System.out.println(operations);
        System.out.println(2); // 시간복잡도는 O(n^2) -> 차수는 2

        sc.close();
    }
}
