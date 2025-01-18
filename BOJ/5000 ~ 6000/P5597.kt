import java.io.BufferedReader
import java.io.InputStreamReader

fun main(args: Array<String>) = with(
    BufferedReader(InputStreamReader(System.`in`))
) {
    // https://kotlinlang.org/docs/arrays.html#create-arrays
    val initArray = Array<Int>(31) { 0 }

    for (idx in 1..28) {
        val studentNo = readLine().toInt()
        initArray[studentNo] = 1
    }

    for (idx in 1..30) {
        if (initArray[idx] == 0)
            println(idx)
    }
}
