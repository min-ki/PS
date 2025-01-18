
fun main(args: Array<String>) {
    val n = readln().toInt()

    for (i in 1..n) {
        val word = readln().toCharArray()
        println("" + word[0] + word[word.size - 1])
    }
}
