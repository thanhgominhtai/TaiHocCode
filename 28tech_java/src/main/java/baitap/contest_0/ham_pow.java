/*
[Làm quen với OJ]. Bài 4. Hàm pow
Cho 2 số x, y. Nhiệm vụ của bạn là tính x ^ y

Input Format
1 dòng chứa 2 số nguyên dương x, y viết cách nhau một dấu cách

Constraints
1<=x,y<=12;

Output Format
In ra x^y, nếu x^y có phần thập phân thì in ra 2 số sau dấu phẩy, nếu không có phần thập phân thì không cần in.

Sample Input 0
2 2

Sample Output 0
4

Sample Input 1
4 1

Sample Output 1
4
 */
package baitap.contest_0;

import static java.lang.Math.pow;
import java.util.Scanner;

public class ham_pow {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int x = sc.nextInt(), y = sc.nextInt();
        System.out.println(pow(x, y));
    }
}
