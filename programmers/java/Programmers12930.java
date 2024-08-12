import java.util.Arrays;

/**
 * https://school.programmers.co.kr/learn/courses/30/lessons/12930
 * 이상한 문자 만들기
 * 1. 문제 설명
 * 문자열 s는 한 개 이상의 단어로 구성되어 있습니다. 각 단어는 하나 이상의 공백문자로 구분되어 있습니다.
 * 각 단어의 짝수번째 알파벳은 대문자로, 홀수번째 알파벳은 소문자로 바꾼 문자열을 리턴하는 함수, solution을 완성하세요.
 * 2. 제한 조건
 * - 문자열 전체의 짝/홀수 인덱스가 아니라, 단어(공백을 기준)별로 짝/홀수 인덱스를 판단해야합니다.
 * - 첫 번째 글자는 0번째 인덱스로 보아 짝수번째 알파벳으로 처리해야 합니다.
 */

public class Programmers12930 {

    public String solution(String s) {
        StringBuilder result = new StringBuilder();

        int idx = 0;
        for(int i = 0; i < s.length(); i++) {
            if (s.charAt(i) == ' ') {
                result.append(' ');
                idx = 0;
            } else{
                if (idx % 2 == 0) {
                    result.append(String.valueOf(s.charAt(i)).toUpperCase());
                } else {
                    result.append(String.valueOf(s.charAt(i)).toLowerCase());
                }
                idx++;
            }
        }

        return result.toString();
    }

    public static void main(String[] args) {
        Programmers12930 p = new Programmers12930();

        String ab = p.solution("try hello world");
        System.out.println(ab); // "TrY HeLlO WoRlD"

        // TODO: try -> TrY
        // TODO: hello world -> HeLlO WoRlD
        String helloWorld = p.solution("hello world");
        System.out.println(helloWorld);

        String try1 = p.solution("try");
        System.out.println("try1: " + try1);

        String multispace = p.solution("try    world");
        System.out.println(multispace);
    }
}
