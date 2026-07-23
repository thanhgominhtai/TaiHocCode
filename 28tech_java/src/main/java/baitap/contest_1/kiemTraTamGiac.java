/*[Kiểu dữ liệu-IF ELSE]. Bài 11. Kiểm tra tam giác

Cho 3 cạnh a, b, c của một tam giác, nếu tam giác đã cho là tam giác đều thì in ra 1, tam giác cân thì in ra 2, tam giác vuông thì in ra 3, tam giác thường in ra 4, trường hợp tam giác nhập vào không hợp lệ thì in ra "INVALID".

Input Format
1 dòng chứa 3 số a, b, c.

Constraints
0<=a,b,c<=10^3

Output Format
In ra kết quả tương ứng.

Sample Input 0
8 8 8

Sample Output 0
1

Sample Input 1
8 8 6

Sample Output 1
2
 */
package baitap.contest_1;

import java.util.Scanner;


public class kiemTraTamGiac {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int a = sc.nextInt(), b = sc.nextInt(), c = sc.nextInt();
        if(a <= 0 || b <= 0 || c <= 0){
            System.out.println("invalid");
        }else if( a + b > c && a + c > b && b + c > a){
            if(a == b && a == c){
                System.out.println("1");
            }else if(a == b || a == c || c == b){
                System.out.println("2");
            }else if(a * a + b * b == c * c || a * a + c * c == b * b || c * c + b * b == a * a){
                System.out.println("3");
            }else{
                System.out.println("invalid");
            }
        }else{
            System.out.println("no");
        }
    }
}
