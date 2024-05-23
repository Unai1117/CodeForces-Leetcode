import java.util.Scanner;

public class phoneDesktop {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();

        while (t-- > 0) {
            int x = sc.nextInt();
            int y = sc.nextInt();
            int screeens = 0;
            if (x == 0 && y == 0) {
                System.out.println("0");
            } else {
                if (y == 0) {
                    while (x > 0) {
                        x -= 15;
                        screeens++;
                    }
                } else {
                    screeens = y / 2;
                    if (y % 2 != 0) {
                        screeens++;
                        int sobran = 7 * (screeens - 1) + 11;
                        while (x > 0) {
                            x -= sobran;
                            if (x > 0) {
                                screeens++;
                                sobran = 15;
                            }
                        }
                    } else {
                        int sobran = 7 * screeens;
                        while (x > 0) {
                            x -= sobran;
                            if (x > 0) {
                                screeens++;
                                sobran = 15;
                            }
                        }
                    }
                }
                System.out.println(screeens);
            }
        }
        sc.close();
    }
}
