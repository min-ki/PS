import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class BOJ11022 {
    public static void main(String[] args) throws IOException {
        BufferedReader bufferedReader = new BufferedReader(new InputStreamReader(System.in));
        int numOfTestCase = Integer.parseInt(bufferedReader.readLine());

        for (int i = 1; i <= numOfTestCase; i++) {
            String readLine = bufferedReader.readLine();
            String[] numbers = readLine.split(" ");

            int a = Integer.parseInt(numbers[0]);
            int b = Integer.parseInt(numbers[1]);
            int sum = a + b;
            System.out.println("Case #" + i + ": " + a + " + " + b + " = " + sum);
        }
    }
}
