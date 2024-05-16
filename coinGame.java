import java.util.Scanner;

public class coinGame {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        sc.nextLine();
        while (t-- > 0) {
            sc.nextLine();
            char[] arr = sc.nextLine().toCharArray();
            int sumU = 0;
            for (char c : arr) {
                if (c == 'U')
                    sumU++;
            }
            if (sumU % 2 == 0)
                System.out.println("NO");
            else {
                System.out.println("YES");
            }
        }
        sc.close();
    }
}