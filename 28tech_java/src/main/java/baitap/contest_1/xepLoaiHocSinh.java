/*Kiểu dữ liệu-IF ELSE]. Bài 14. Xếp loại học sinh

Yêu cầu: Cho biết điểm kiểm tra Tin học của 1 em học sinh (2 con điểm hệ số 1, 1 con điểm hệ số 2, 1 con điểm hệ số 3). In ra Kết quả học tập môn Tin học của em đó. Nếu điểm tổng kết >=8 đạt kết quả Giỏi, <8 và >=6,5 đạt kết quả Khá, <6,5 và >=5 đạt kết quả Trung Bình, <5 đạt kết quả Yếu.

Input Format
Một dòng chứa 4 số điểm của học sinh.

Constraints
Điểm là số thực từ 0 tới 10.

Output Format
Kết quả học tập môn Tin học của em học sinh ở dạng in hoa không dấu

Sample Input 0
9 8 7 8.5

Sample Output 0
GIOI

Sample Input 1
5 7 6.5 5

Sample Output 1
TRUNG BINH
 */
package baitap.contest_1;

import java.util.Scanner;

public class xepLoaiHocSinh {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        float h1_1 = sc.nextFloat(), h1_2 = sc.nextFloat(), h2 = sc.nextFloat(), h3 = sc.nextFloat();
        float tong = (h1_1 + h1_2 + h2 * 2 + h3 * 3) / 7;
        if(tong >= 8){
            System.out.println("gioi");
        }else if(tong < 8 && tong >= 6.5){
            System.out.println("kha");
        }else if(tong < 6.5 && tong >= 5){
            System.out.println("trung binh");
        }else{
            System.out.println("yeu");
        }
    }
}
