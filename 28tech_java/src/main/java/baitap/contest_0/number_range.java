/*
[Làm quen với OJ]. Bài 14. Number in range

Cho 2 số a và b, nhiệm vụ của bạn là in ra số lượng số nguyên tính từ a đến b.

Input Format
Dòng duy nhất chứa 2 số nguyên a và b.

Constraints
1<=a<=b<=10^12

Output Format
In ra kết quả của bài toán

Sample Input 0
14 19

Sample Output 0
6
 */
package baitap.contest_0;

import java.util.Scanner;

public class number_range {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        long a = sc.nextLong(), b = sc.nextLong();
        System.out.println(b - a + 1);
    }
}
