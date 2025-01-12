// https://www.acmicpc.net/problem/1330

import java.util.*

fun main(args: Array<String>) = with(Scanner(System.`in`)) {
    val a = nextInt()
    val b = nextInt()

    val result = if (a > b) ">" else if (a < b) "<" else "=="
    print(result)
}
