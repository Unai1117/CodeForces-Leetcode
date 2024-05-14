import java.util.*;

public class maxProductPoint {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        while (sc.hasNext()) {
            long sum = 0;
            int n = sc.nextInt();
            long[] arr1 = new long[n];
            long[] arr2 = new long[n];
            for (int i = 0; i < n; i++) {
                arr1[i] = sc.nextInt();
            }
            for (int i = 0; i < n; i++) {
                arr2[i] = sc.nextInt();
            }
            Arrays.sort(arr1);
            Arrays.sort(arr2);

            for (int i = 0; i < n; i++) {
                sum += arr1[i] * arr2[i];
            }
            System.out.println(sum);
        }
        sc.close();
    }
}
