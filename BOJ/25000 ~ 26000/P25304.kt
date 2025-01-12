// https://www.acmicpc.net/problem/25304
import java.io.BufferedReader
import java.io.InputStreamReader
import java.util.*

// 2. BufferedReader 사용
fun main(args: Array<String>) = with(BufferedReader(InputStreamReader(System.`in`))) {
    var st = StringTokenizer(readLine())

    val x: Long = st.nextToken().toLong()
    st = StringTokenizer(readLine())
    val n: Int = st.nextToken().toInt()

    val price = IntRange(1, n).map {
        st = StringTokenizer(readLine())
        val a = st.nextToken().toLong()
        val b = st.nextToken().toLong()
        a * b
    }.reduce { acc, item -> acc + item }

    print(if (x == price) "Yes" else "No")
}

// 1. Scanner 사용 버전
//import java.util.*
//
//fun main(args: Array<String>) = with(Scanner(System.`in`)) {
//
//    val x: Long = nextLine().toLong()
//    val n: Int = nextLine().toInt()
//
//    val price = IntRange(1, n).map {
//        val (a, b) = nextLine().split(" ").map { it.toLong() }
//        a * b
//    }.reduce { acc, item -> acc + item }
//
//    print(if (x == price) "Yes" else "No")
//}
