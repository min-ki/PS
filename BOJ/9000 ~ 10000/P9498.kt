// https://www.acmicpc.net/problem/9498
import java.util.*;

fun calculateGrade(score: Int): Char = when (score) {
    in 90..100 -> 'A'
    in 80..89 -> 'B'
    in 70..79 -> 'C'
    in 60..69 -> 'D'
    else -> 'F'
}


fun main(args: Array<String>) = with(Scanner(System.`in`)) {
    val grade = calculateGrade(nextInt())
    print(grade)
}
