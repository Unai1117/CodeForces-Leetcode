import java.util.Scanner;
import java.util.ArrayList;
import java.util.List;
import java.util.Queue;

public class granCafetería {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int m = sc.nextInt();
        List<Queue<String>> lq = new ArrayList<Queue<String>>(n);
        for (int i = 0; i < m; i++) {
            Character c = sc.next();
            if (s.startsWith("a")) {
                int x = sc.nextInt();
                lq.get(x).add(sc.next());
            } else if (s.startsWith("p")) {

                System.out.println("-");
            }
        }
    }
}
