import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class BOJ2558 {

    public static void main(String[] args) throws IOException {

        BufferedReader bufferedReader = new BufferedReader(new InputStreamReader(System.in));
        String firstLine = bufferedReader.readLine();
        String secondLine = bufferedReader.readLine();

        int a = Integer.parseInt(firstLine);
        int b = Integer.parseInt(secondLine);

        System.out.println(a + b);
    }
}
