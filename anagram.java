import java.util.*;
import java.util.HashMap;

public class problems {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		while (sc.hasNext()) {
			Map<Character, Integer> m = new HashMap<Character, Integer>();
			String l1 = sc.nextLine();
			String l2 = sc.nextLine();

			for (int i = 0; i < l1.length(); i++) {
				Character c = l1.charAt(i);
				Integer n = m.get(c);
				if (n == null) {
					m.put(c, 1);
				} else {
					m.put(c, ++n);
				}
			}

			for (int i = 0; i < l2.length(); i++) {
				Character c2 = l2.charAt(i);
				Integer n2 = m.get(c2);
				if (n2 == null) {
					System.out.println("NO");
					return;
				} else {
					m.put(c2, --n2);
					if (n2 < 0) {
						System.out.println("NO");
						return;
					}
				}
			}

			for (int val : m.values()) {
				if (val != 0) {
					System.out.println("NO");
					return;
				}
			}
			System.out.println("YES");
		}
		sc.close();
	}

}
