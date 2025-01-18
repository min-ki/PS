import java.io.*

// https://www.acmicpc.net/problem/10811

fun main(args: Array<String>) = with(
    BufferedReader(InputStreamReader(System.`in`))
) {
    // n: 바구니의 개수, m: 바꿔치기 횟수
    val (n, m) = readLine().split(" ").map { it.toInt() }
    val baskets: Array<Int> = Array(n+1) { 0 }

    // init baskets
    for (i in 1 .. n) {
        baskets[i] = i
    }

    // M번 위치를 바꾼다.
    for (i in 0 until m) {
        val (a, b) = readLine().split(" ").map { it.toInt() }
        val temp = baskets.copyOf().slice(IntRange(a, b))

        for (k in a .. b) {
            baskets[k] = temp[b - k]
        }
    }

    for (idx in baskets.indices) {
        if (idx == 0) continue
        if (idx == n) {
            print("${baskets[idx]}")
        } else {
            print("${baskets[idx]} ")
        }
    }
}
