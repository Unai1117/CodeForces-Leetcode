import java.util.*;

public class MergeSort {
    public static void merge(int[] arr, int[] narr1, int[] narr2, int l, int r) {
        int i = 0, j = 0, k = 0;
        while (i < l && j < r) {
            if (narr1[i] <= narr2[j]) {
                arr[k++] = narr1[i++];
            } else {
                arr[k++] = narr2[j++];
            }
        }

        while (i < l) {
            arr[k++] = narr1[i++];
        }
        while (j < r) {
            arr[k++] = narr2[j++];
        }
    }

    public static void mergeSort(int[] v, int length) {
        if (length < 2)
            return;
        int m = length / 2;
        int[] narr1 = new int[m];
        int[] narr2 = new int[length - m];

        for (int i = 0; i < m; i++) {
            narr1[i] = v[i];
        }

        for (int i = m; i < length; i++) {
            narr2[i - m] = v[i];
        }

        mergeSort(narr1, m);
        mergeSort(narr2, length - m);

        merge(v, narr1, narr2, m, length - m);
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        while (sc.hasNext()) {
            int n = sc.nextInt();
            int[] v = new int[n];
            for (int i = 0; i < n; i++) {
                v[i] = sc.nextInt();
            }

            mergeSort(v, n);
            for (int i = 0; i < n; i++) {
                System.out.print(v[i] + " ");
            }
            System.out.println("\n");
        }
        sc.close();
    }

}
