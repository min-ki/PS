// https://www.acmicpc.net/problem/5622

fun main() {
    val word = readln()
    var result = 0

    for(c in word.toCharArray()) {
        when(c) {
            'A', 'B', 'C' -> result += 3
            'D', 'E', 'F' -> result += 4
            'G', 'H', 'I' -> result += 5
            'J', 'K', 'L' -> result += 6
            'M', 'N', 'O' -> result += 7
            'P', 'Q', 'R', 'S' -> result += 8
            'T', 'U', 'V' -> result += 9
            'W', 'X', 'Y', 'Z', -> result += 10
        }
    }
    println(result)
}
