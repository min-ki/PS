import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class BOJ11720 {
    public static void main(String[] args) throws IOException {
        InputStreamReader inputStreamReader = new InputStreamReader(System.in);
        BufferedReader bufferedReader = new BufferedReader(inputStreamReader);

        int numOfnumberTokens = Integer.parseInt(bufferedReader.readLine());
        String numbers = bufferedReader.readLine();
        int sum = 0;

        for (int i = 0; i < numOfnumberTokens; i++) {
            int number = numbers.charAt(i) - '0';
            sum += number;
        }
        System.out.println(sum);
    }
}
