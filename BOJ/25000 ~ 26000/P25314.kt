import java.util.Scanner

fun main(args: Array<String>) = with(Scanner(System.`in`)) {
    val n = nextInt()
    val numOfLong = n / 4

    val sb = StringBuilder()

    IntRange(1, numOfLong).forEach { _ ->
        if(sb.isEmpty()) sb.append("long")
        else sb.append(" long")
    }

    sb.append(" int")
    print(sb)
}
