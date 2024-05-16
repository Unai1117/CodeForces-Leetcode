import java.util.Scanner;

public class prefiquence {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while (t-- > 0) {
            int n = sc.nextInt();
            int m = sc.nextInt();
            sc.nextLine();
            char[] a = sc.nextLine().toCharArray();
            char[] b = sc.nextLine().toCharArray();

            int i = 0, j = 0, res = 0;
            while (i < n && j < m) {
                if (a[i] == b[j]) {
                    i++;
                    j++;
                    res++;
                } else {
                    j++;
                }
            }
            System.out.println(res);
        }
        sc.close();
    }
}
