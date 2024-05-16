import java.util.Scanner;

public class maximize {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while (t-- > 0) {
            sc.nextLine();
            int x = sc.nextInt();
            System.out.println(x - 1);
        }
        sc.close();
    }
}
