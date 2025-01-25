import java.util.Scanner;

public class P2908 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String[] nums = sc.nextLine().split(" ");
        String aReverse = new StringBuilder(nums[0]).reverse().toString();
        String bReverse = new StringBuilder(nums[1]).reverse().toString();
        int aNum = Integer.parseInt(aReverse);
        int bNum = Integer.parseInt(bReverse);
        System.out.println(Math.max(aNum, bNum));
    }
}
