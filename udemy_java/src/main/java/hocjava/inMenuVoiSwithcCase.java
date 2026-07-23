/* luu y muc 2
tim cac so chia het cho 7
khong la boi cua 5
va nam tong 10 den 200
 */
package hocjava;

import static java.lang.Math.sqrt;
import java.util.Scanner;

public class inMenuVoiSwithcCase {

    public static void main(String[] args) {
        System.out.println("""
                           ******MENU*****
                           1. Tinh giai thua.           
                           2. Tim so.
                           3. Gpt Bac Nhat.
                           4. Gpt Bac Hai.
                           0. Thoat.
                           Chon cong Viec:
                           """);
        int n;
        Scanner sc = new Scanner(System.in);
        do {
            n = sc.nextInt();
            switch (n) {
                case 1:
                    System.out.println("nhap so tinh giai thua:");
                    int x, kq = 1;
                    x = sc.nextInt();
                    for (int i = x; i > 0; i--) {
                        kq *= i;
                    }
                    System.out.print(" kq gt la: " + kq);
                    break;
                case 2:
                    for (int i = 10; i <= 200; i++) {
                        if (i % 7 == 0 && i % 5 != 0) {
                            System.out.print(i + " ");
                        }
                    }
                    break;
                case 3:
                    int q, m;
                    q = sc.nextInt();
                    m = sc.nextInt();
                    if (q != 0) {
                        System.out.println("pt co nghiem suy nhat la: " + (-m * 1.0 / q));
                    } else {
                        if (m == 0) {
                            System.out.println("pt co vo so nghiem");
                        } else {
                            System.out.println("phuong trinh vo nghiem");
                        }
                    }
                    break;
                case 4:
                    int a, b, c;
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
                    break;
                    default:
                        break;
            }
        } while (n >= 0 && n <= 4);
    }
}
