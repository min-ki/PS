// https://www.acmicpc.net/problem/16935

import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.util.StringTokenizer;

public class P16935 {

    public static long[][] operation1(long[][] arr) {
        long[][] result = new long[arr.length][arr[0].length];
        for (int i=0; i<arr.length; i++) {
            for (int j=0; j<arr[i].length; j++) {
                result[arr.length - 1 - i][j] = arr[i][j];
            }
        }
        return result;
    }

    public static long[][] operation2(long[][] arr) {
        long[][] result = new long[arr.length][arr[0].length];
        for(int i=0; i<arr.length; i++) {
            for (int j = 0; j < arr[i].length; j++) {
                result[i][arr[i].length - 1 - j] = arr[i][j];
            }
        }
        return result;
    }

    public static long[][] operation3(long[][] arr) {
        long[][] result = new long[arr[0].length][arr.length];
        for(int i=0; i< arr.length; i++) {
            for (int j = 0; j < arr[i].length; j++) {
                result[j][arr.length - 1 - i] = arr[i][j];
            }
        }
        return result;
    }

    public static long[][] operation4(long[][] arr) {
        long[][] result = new long[arr[0].length][arr.length];
        for(int i = 0; i < arr.length; i++) {
            for (int j = 0; j < arr[i].length; j++) {
                result[arr[i].length - 1 - j][i] = arr[i][j];
            }
        }
        return result;
    }

    public static long[][] operation5(long[][] arr) {
        long[][] result = new long[arr.length][arr[0].length];
        int px = arr.length / 2;
        int py = arr[0].length / 2;

        for(int i=0; i<px; i++) {
            for(int j=0; j<py; j++) {
                result[i][j+py] = arr[i][j];
            }
        }

        for(int i=0; i<px; i++) {
            for(int j=py; j<arr[0].length; j++) {
                result[i+px][j] = arr[i][j];
            }
        }

        for (int i=px; i<arr.length; i++) {
            for(int j=py; j<arr[0].length; j++) {
                result[i][j-py] = arr[i][j];
            }
        }

        for (int i=px; i<arr.length; i++) {
            for(int j=0; j<py; j++) {
                result[i-px][j] = arr[i][j];
            }
        }

        return result;
    }

    public static long[][] operation6(long[][] arr) {
        long[][] result = new long[arr.length][arr[0].length];
        int px = arr.length / 2;
        int py = arr[0].length / 2;

        for(int i=0; i<px; i++) {
            for(int j=0; j<py; j++) {
                result[i+px][j] = arr[i][j];
            }
        }

        for(int i=px; i<arr.length; i++) {
            for(int j=0; j<py; j++) {
                result[i][j+py] = arr[i][j];
            }
        }

        for(int i=px; i<arr.length; i++) {
            for(int j=py; j<arr[0].length; j++) {
                result[i-px][j] = arr[i][j];
            }
        }

        for(int i=0; i<px; i++) {
            for(int j=py; j<arr[0].length; j++) {
                result[i][j-py] = arr[i][j];
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
        long[][] arr = new long[N][M];

        for(int i=0; i<N; i++) {
            st = new StringTokenizer(br.readLine());
            for(int j=0; j<M; j++) {
                arr[i][j] = Integer.parseInt(st.nextToken());
            }
        }

        long[][] result = new long[N][M];
        for(int i=0; i<arr.length; i++) {
            for(int j=0; j<arr[0].length; j++) {
                result[i][j] = arr[i][j];
            }
        }

        st = new StringTokenizer(br.readLine());
        for(int r=0; r<R; r++) {
            int operation = Integer.parseInt(st.nextToken());
            int tmp;
            for(int i=0; i<R; i++) {
                switch (operation) {
                    case 1:
                        result = operation1(result);
                        break;
                    case 2:
                        result = operation2(result);
                        break;
                    case 3:
                        result = operation3(result);
                        tmp = N;
                        N = M;
                        M = tmp;
                        break;
                    case 4:
                        result = operation4(result);
                        tmp = N;
                        N = M;
                        M = tmp;
                        break;
                    case 5:
                        result = operation5(result);
                        break;
                    case 6:
                        result = operation6(result);
                        break;
                    default:
                        throw new Exception("error");
                }
            }
        }

        for(int i=0; i<result.length; i++) {
            for(int j=0; j<result[i].length; j++) {
                if (j == result[i].length - 1) {
                    System.out.print(result[i][j]);
                } else {
                    System.out.print(result[i][j] + " ");
                }
            }
            if(i != result.length - 1) {
                System.out.println();
            }
        }
    }
}
