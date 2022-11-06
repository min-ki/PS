import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class BOJ11721 {
    public static void main(String[] args) throws IOException {

        InputStreamReader inputStreamReader = new InputStreamReader(System.in);
        BufferedReader bufferedReader = new BufferedReader(inputStreamReader);

        String line = bufferedReader.readLine();

        int iterCnt = (line.length() / 10) + 1;
        int lastSubStringLength = (line.length() % 10);

        for (int i = 0; i < iterCnt; i++) {
            int startIndex = i * 10;
            int endIndex;

            if (i + 1 == iterCnt) {
                endIndex = (i * 10) + lastSubStringLength;
            } else {
                endIndex = (i * 10) + 10;
            }

            String substring = line.substring(startIndex, endIndex);
            System.out.println(substring);
        }
    }
}
