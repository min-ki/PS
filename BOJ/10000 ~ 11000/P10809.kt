// https://www.acmicpc.net/problem/10809

fun main(args: Array<String>) {
    val word = readln()
    val position = Array(size = 26) { -1 }

    for((idx, c) in word.withIndex()) {
        val offset = c - 'a'
        if (position[offset] == -1) position[offset] = idx
    }

    for ((idx, p) in position.withIndex()) {
        if (idx == position.size - 1) print("$p")
        else print("$p ")
    }
}
