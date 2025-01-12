// https://www.acmicpc.net/problem/2525

import java.util.*

fun main(args: Array<String>) = with(Scanner(System.`in`)) {
    val (startHour, startMinute) = nextLine().split(" ").map { it.toInt() }
    val startedAtInMinute = startHour * 60 + startMinute;
    val midNight = 24 * 60;

    val cookTime = nextInt()
    var finishedAt = startedAtInMinute + cookTime

    if (finishedAt >= midNight) {
        finishedAt =  finishedAt - midNight
    }
    print("${finishedAt / 60} ${finishedAt % 60}")
}
