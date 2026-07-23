/*Kiểu dữ liệu-IF ELSE]. Bài 16. Kí tự kế tiếp
Cho kí tự là chữ cái in hoa hoặc in thường, in ra kí tự kế tiếp sau nó trong bảng chữ cái ở dạng in thường, tức là kí tự nhập vào ở dạng in hoa hay in thường thì bạn đều in ra kí tự kế tiếp nó nhưng ở dạng in thường. Coi kí tự kế tiếp của của chữ Z là chữ A.

Input Format
1 dòng chứa kí tự c

Constraints
c là chữ cái in hoa hoặc in thường

Output Format
In ra chữ cái kế tiếp ở dạng in thường

Sample Input 0
A

Sample Output 0
b

Sample Input 1
z

Sample Output 1
a
 */
package baitap.contest_1;

import java.util.Scanner;

public class kyTuKeTiep {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        char n = sc.nextLine().charAt(0);
        if(n >= 'A' && n < 'Z'){
            System.out.println((char)(n + 33));
        }
        if(n >= 'a' && n < 'z'){
            System.out.println((char)(n - 31));
        }
        if(n == 'z'){
            System.out.println("A");
        }
        if(n == 'Z'){
            System.out.println("a");
        }
    }
}
