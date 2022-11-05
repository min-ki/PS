import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class BOJ10950 {

    public static void main(String[] args) throws IOException {
        BufferedReader bufferedReader = new BufferedReader(new InputStreamReader(System.in));

        int numOfTestCase = Integer.parseInt(bufferedReader.readLine());

        for (int i = 0; i < numOfTestCase; i++) {
            String readLine = bufferedReader.readLine();
            String[] numbers = readLine.split(" ");

            int a = Integer.parseInt(numbers[0]);
            int b = Integer.parseInt(numbers[1]);

            System.out.println(a + b);
        }
    }
}
