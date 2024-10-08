import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;

/**
 * https://school.programmers.co.kr/learn/courses/30/lessons/12932
 * 자연수 뒤집어 배열로 만들기
 * 자연수 n을 뒤집어 각 자리 숫자를 원소로 가지는 배열 형태로 리턴해주세요. 예를들어 n이 12345이면 [5,4,3,2,1]을 리턴합니다.
 * 제한조건
 * n은 10,000,000,000이하인 자연수입니다.
 * 입출력 예
 * n	    return
 * 12345	[5,4,3,2,1]
 */

public class Programmers12932 {

    public int[] solution(int n) {
        List<Integer> answer = new ArrayList<>();
        String numberString = String.valueOf(n);

        for(int i = numberString.length() - 1; i >= 0; i--) {
            int number = numberString.charAt(i) - '0';
            answer.add(number);
        }

        return answer.stream().mapToInt(Integer::intValue).toArray();
    }

    public static void main(String[] args) {
        Programmers12932 p = new Programmers12932();
        int[] result = p.solution(12345);
        // rsult = [5, 4, 3, 2, 1]
        System.out.println(Arrays.toString(result));
    }
}
