import java.util.*;

public class ColeccionistadePokemons {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        String s = sc.nextLine();
        Map<String, Integer> m = new HashMap<>(n);
        for (int i = 0; i < n; i++) {
            s = sc.nextLine();
            Integer num = m.get(s);
            if (num == null) {
                m.put(s, 1);
            }
        }
        System.out.println(m.size());
        sc.close();
    }
}
