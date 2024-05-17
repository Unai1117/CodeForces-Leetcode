
import java.util.Scanner;

public class p1 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while (t-- > 0) {
            int p1 = sc.nextInt();
            int p2 = sc.nextInt();
            int p3 = sc.nextInt();
            int totalPoints = p1 + p2 + p3;
            if (totalPoints % 2 == 0) {
                if (p3 > p1 + p2) {
                    System.out.println(p1 + p2);
                } else {
                    System.out.println(totalPoints / 2);
                }
            } else {
                System.out.println(-1);
            }
        }
        sc.close();
    }
}
