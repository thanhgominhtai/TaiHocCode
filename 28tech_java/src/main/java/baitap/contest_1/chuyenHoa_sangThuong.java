/*Kiểu dữ liệu-IF ELSE]. Bài 18. Chuyển đổi in hoa in thường
Cho kí tự c, nếu kí tự c là chữ cái in thường thì chuyển nó thành chữ cái in hoa tương ứng và ngược lại nếu c là chữ cái in hoa thì chuyển nó thành chữ cái in thường tương ứng. Trường hợp kí tự nhập vào không phải là chữ cái thì không thay đổi nó.

Input Format
1 dòng chứa kí tự c

Constraints
c có thể là chữ in hoa, in thường, chữ số hoặc kí tự đặc biệt.

Output Format
In ra kết quả theo yêu cầu

Sample Input 0
e

Sample Output 0
E

Sample Input 1
$

Sample Output 1
$
 */
package baitap.contest_1;

import java.util.Scanner;

public class chuyenHoa_sangThuong {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        char c = sc.nextLine().charAt(0);
        if(c >= 'A' && c <= 'Z'){
            System.out.println((char) (c + 32));
        }else if(c >= 'a' && c <= 'z'){
            System.out.println((char) (c - 32));
        }else {
            System.out.println(c);
        }
    }
}
