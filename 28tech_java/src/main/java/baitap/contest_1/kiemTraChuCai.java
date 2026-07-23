/*Kiểu dữ liệu-IF ELSE]. Bài 17. Kiểm tra chữ cái

Cho một kí tự, bạn hãy kiểm tra kí tự nhập vào là chữ cái in hoa, in thường, chữ số hay kí tự đặc biệt(các kí tự không phải là chữ cái và chữ số)

Input Format
1 dòng chứa kí tự c

Constraints
c là chữ in hoa, in thường, chữ số hoặc kí tự đặc biệt

Output Format
Nếu c là chữ cái in hoa in ra "UPPER". Nếu c là chữ cái in thường in ra "LOWER". Nếu c là chữ số in ra "DIGIT". Nếu c là kí tự đặc biệt in ra "SPECIAL".

Sample Input 0
Z

Sample Output 0
UPPER
 */
package baitap.contest_1;

import java.util.Scanner;


public class kiemTraChuCai {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        char c = sc.nextLine().charAt(0);
        if(Character.isDigit(c)){
            System.out.println("so");
        }else if(Character.isUpperCase(c)){
            System.out.println("upper");
        }else if(Character.isLowerCase(c)){
            System.out.println("lower");
        }else{
            System.out.println("ky tu dac biet");
        }
    }
}