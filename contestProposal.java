import java.util.Scanner;

public class contestProposal {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while (t-- > 0) {
            int n = sc.nextInt();
            int[] a = new int[n];
            int[] b = new int[n];
            for (int i = 0; i < n; i++) {
                a[i] = sc.nextInt();
            }
            for (int i = 0; i < n; i++) {
                b[i] = sc.nextInt();
            }

            int i = 0, j = 0, res = 0;
            while (i < n && j < n) {
                if (a[i] <= b[j]) {
                    i++;
                    j++;
                } else {
                    res++;
                    j++;
                }
            }
            System.out.println(res);
        }
        sc.close();
    }
}