package hocjava;

import static java.lang.Math.sqrt;
import java.util.Scanner;

public class giaiPtBacHai {

    public static void main(String[] args) {
        int a, b, c;
        Scanner sc = new Scanner(System.in);
        do {
            a = sc.nextInt();
            b = sc.nextInt();
            c = sc.nextInt();
        } while (a == 0);
        int delta = b * b - (4 * a * c);
        if (delta < 0) {
            System.out.println("pt vo nghiem");
        } else {
            if (delta == 0) {
                System.out.println("pt co nghiem kep" + (-b * 1.0 / (2 * a)));
            } else {
                System.out.println("pt co hai nghiem la: "
                        + ((-b * 1.0 + sqrt(delta)) / (2 * a))
                        + " " + ((-b * 1.0 - sqrt(delta)) / (2 * a)));
            }
        }
    }
}
