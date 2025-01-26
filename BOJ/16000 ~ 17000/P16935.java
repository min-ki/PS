import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.util.StringTokenizer;

public class P16935 {

    public static int[][] operation1(int[][] arr) {
        int[][] result = new int[arr.length][arr[0].length];
        for (int i=0; i<arr.length; i++) {
            for (int j=0; j<arr[i].length; j++) {
                result[arr.length - 1 - i][j] = arr[i][j];
            }
        }
        return result;
    }

    public static int[][] operation2(int[][] arr) {
        int[][] result = new int[arr.length][arr[0].length];
        for(int i=0; i<arr.length; i++) {
            for (int j = 0; j < arr[i].length; j++) {
                result[i][arr[i].length - 1 - j] = arr[i][j];
            }
        }
        return result;
    }

    public static int[][] operation3(int[][] arr) {
        int[][] result = new int[arr[0].length][arr.length];
        for(int i=0; i< arr.length; i++) {
            for (int j = 0; j < arr[i].length; j++) {
                result[j][arr.length - 1 - i] = arr[i][j];
            }
        }
        return result;
    }

    /**
     * 왼쪽으로 90도 회전시키는 연산
     * arr[0][], arr[1][]...를 위에서부터 읽어서
     * 열을 고정시키고 행 인덱스를 작게 줄이면서 변환처리
     */
    public static int[][] operation4(int[][] arr) {
        int[][] result = new int[arr.length][arr[0].length];
        for(int i=0; i<arr.length; i++) { // 6
            for (int j = 0; j < arr[i].length; j++) { // 8
                result[i][arr[i].length - 1 - j] = arr[i][j];
            }
        }
        return result;
    }

    public static int[][] operation5(int[][] arr) {
        int[][] result = new int[arr.length][arr[0].length];
        for(int i=0; i<arr.length; i++) {
            for (int j = 0; j < arr[i].length; j++) {
                result[i][arr[i].length - 1 - j] = arr[i][j];
            }
        }
        return result;
    }

    public static int[][] operation6(int[][] arr) {
        int[][] result = new int[arr.length][arr[0].length];
        for(int i=0; i<arr.length; i++) {
            for (int j = 0; j < arr[i].length; j++) {
                result[i][arr[i].length - 1 - j] = arr[i][j];
            }
        }
        return result;
    }

    public static void main(String[] args) throws Exception {
        InputStreamReader isr = new InputStreamReader(System.in);
        BufferedReader br = new BufferedReader(isr);
        StringTokenizer st = new StringTokenizer(br.readLine());

        // N, M, R
        int N = Integer.parseInt(st.nextToken());
        int M = Integer.parseInt(st.nextToken());
        int R = Integer.parseInt(st.nextToken());
        int[][] arr = new int[N][M];

        for(int i=0; i<N; i++) {
            st = new StringTokenizer(br.readLine());
            for(int j=0; j<M; j++) {
                arr[i][j] = Integer.parseInt(st.nextToken());
            }
        }
        int operation = Integer.parseInt(br.readLine());

        // case
        int[][] result = new int[N][M];

        for(int i=0; i<R; i++) {
            switch (operation) {
                case 1:
                    result = operation1(arr);
                    break;
                case 2:
                    result = operation2(arr);
                    break;
                case 3:
                    result = operation3(arr);
                    int tmp;
                    tmp = N;
                    N = M;
                    M = tmp;
                    break;
                case 4:
                    result = operation4(arr);
                    break;
                case 5:
                    result = operation5(arr);
                    break;
                case 6:
                    result = operation6(arr);
                    break;
                default:
                    throw new Exception("error");
            }
        }

        for(int i=0; i<N; i++) {
            for(int j=0; j<M; j++) {
                System.out.print(result[i][j] + " ");
            }
            System.out.println();
        }
        System.out.println("Operation: " + operation);
    }
}
