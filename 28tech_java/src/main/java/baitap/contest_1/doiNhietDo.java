/*
[Kiểu dữ liệu-IF ELSE]. Bài 3. Đổi nhiệt độ · Problem · Submissions · Discussions

Công thức chuyển đơn vị đo nhiệt độ từ C sang F như sau: F = (C * 9 / 5) + 32. Viết chương trình cho 
phép nhập vào nhiệt độ đo theo độ C là số nguyên dương không quá 10^6, thực hiện chuyển sang đơn vị 
đo độ F và in ra màn hình. (Lưu ý luôn lấy 2 chữ số thập phân sau dấu chấm phẩy)

Input Format
Nhiệt độ ở độ C là một số nguyên không âm.

Constraints
0≤n≤10^6

Output Format
Kết quả đổi từ độ C sang độ F

Sample Input 0
24

Sample Output 0
75.20
 */
package baitap.contest_1;

import java.util.Scanner;

public class doiNhietDo {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int c = sc.nextInt();
        double f = ((double)c * 9 / 5) + 32;
        System.out.println(f);
    }
}
