/*
[Làm quen với OJ]. Bài 12. Hàm F(x, y)

Cho F(x, y) = 5 * x + 2 * y + x * y, với x, y được nhập từ bàn phím hãy in ra kết quả 
của F(x, y). Mỗi khi tính toán kết quả phải chú ý tới giới hạn của bài toán, để xác định 
xem kết quả của bài toán sẽ nằm tới ngưỡng nào để lựa chọn kiểu dữ liệu cho phù hợp.

Input Format
Dòng duy nhất chứa 2 số x, y trên 1 dòng.

Constraints
x, y là số nguyên; 1<=x, y<=10^6;

Output Format
In ra kết quả của hàm F(x, y)

Sample Input 0
6 3

Sample Output 0
54
 */
package baitap.contest_0;

import java.util.Scanner;


public class ham_Fxy {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int x = sc.nextInt(), y = sc.nextInt();
        long r = 5 * x + 2 * y + x * y;
        System.out.println(r);
    }
}
