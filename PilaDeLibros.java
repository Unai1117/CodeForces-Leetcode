import java.util.*;

public class PilaDeLibros {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        Stack<String> stack = new Stack<>();
        sc.nextLine();
        for (int i = 0; i < n; i++) {
            String s = sc.nextLine();
            if (s.startsWith("Depositan")) {
                stack.push(s.substring(10, s.length()));
            } else if (s.startsWith("Retiran")) {
                stack.pop();
            }
        }

        if (stack.isEmpty())
            System.out.println("No quedan libros");
        while (!stack.isEmpty()) {
            System.out.println(stack.pop());
        }
        sc.close();
    }
}
