import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class BOJ10952 {

    public static void main(String[] args) throws IOException {
        BufferedReader bufferedReader = new BufferedReader(new InputStreamReader(System.in));

        String readLine;

        while ((readLine = bufferedReader.readLine()) != null) {
            String[] numbers = readLine.split(" ");

            int a = Integer.parseInt(numbers[0]);
            int b = Integer.parseInt(numbers[1]);

            if (a == 0 && b == 0) {
                return;
            }

            System.out.println(a + b);
        }
    }
}
