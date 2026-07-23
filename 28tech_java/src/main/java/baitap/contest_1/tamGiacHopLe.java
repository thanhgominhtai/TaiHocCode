/*
[Kiểu dữ liệu-IF ELSE]. Bài 10. Tam giác hợp lệ

Cho 3 cạnh a, b, c là độ dài 3 cạnh của tam giác, kiểm tra xem a, b, c có thể tạo thành một tam giác hợp lệ hay không?

Gợi ý : Tam giác hợp lệ là tam giác có 3 cạnh đều dương, và tổng hai cạnh luôn lớn hơn cạnh còn lại => Cần 6 điều kiện và kết hợp toán tử &&

Input Format
1 dòng chứa 3 số a, b, c.

Constraints
-10^6<=a,b,c<=10^6

Output Format
In ra YES nếu a, b, c là 3 cạnh của 1 tam giác hợp lệ, ngược lại in ra NO.

Sample Input 0
3 4 5

Sample Output 0
YES
 */
package baitap.contest_1;

import java.util.Scanner;

public class tamGiacHopLe {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int a = sc.nextInt(), b = sc.nextInt(), c = sc.nextInt();
        if(a <= 0 || b <= 0 || c <= 0){
            System.out.println("No");
        }else if( a + b > c && a + c > b && b + c > a){
            System.out.println("yes");
        }else{
            System.out.println("no");
        }
    }
}
