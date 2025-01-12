// https://www.acmicpc.net/problem/10813

import java.io.*

fun main(args: Array<String>) {
    val br = BufferedReader(InputStreamReader(System.`in`))

    val (n, m) = br.readLine().split(" ").map { it.toInt() }
    val arr: IntArray = (0..n).toList().toIntArray()

    (1..m).forEach { _ ->
        val (i, j) = br.readLine().split(" ").map { it.toInt() }
        val temp = arr[i]
        arr[i] = arr[j]
        arr[j] = temp
    }

    // 0을 제외하고 나머지
    arr.slice(1..n).mapIndexed { index, i ->
        if((index + 1) != n) print("$i ")
        else print("$i")}
}
