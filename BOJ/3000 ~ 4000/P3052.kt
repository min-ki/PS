import java.io.BufferedReader
import java.io.InputStreamReader

fun main(args: Array<String>) = with(
    BufferedReader(InputStreamReader(System.`in`))
) {
    val items = mutableSetOf<Int>()
    for (idx in 1..10) {
        val num = readLine().toInt()
        items.add(num % 42)
    }
    print(items.size)
}
