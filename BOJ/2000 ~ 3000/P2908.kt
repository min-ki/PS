import kotlin.math.max

fun main(args: Array<String>) {
    val (a, b) = readln().split(" ")
    println(max(a.reversed().toInt(), b.reversed().toInt()))
}
