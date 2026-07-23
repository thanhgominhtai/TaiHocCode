/*
[Vòng lặp]. Bài 0.Viết vòng lặp

Bài này các bạn sử dụng cả 2 vòng lặp for và while để code. Lượt 1 sử dụng for, lượt 2 dùng while. Cho số tự nhiên N, nhiệm vụ của bạn in ra các dãy số bằng vòng lặp trên từng dòng, mỗi số cách nhau một dấu cách.

· Dòng 1. In ra các số từ 1 tới n.

· Dòng 2 in ra các số từ n về 0.

· Dòng 3 in ra các số chẵn nhỏ hơn hoặc bằng n.

· Dòng 4 in ra các số lẻ nhỏ hơn hoặc bằng n.

· Dòng 5 in ra các bội số của 4 nhỏ hơn n.

· Dòng 6 in ra N chữ cái in thường đầu tiên.

· Dòng 7 in ra N chữ cái in thường cuối cùng theo thứ tự tăng dần.

Input Format
Dòng duy nhất chứa số nguyên dương N

Constraints
5<=N<=26

Output Format
In ra 7 dòng theo yêu cầu

Sample Input 0
5

Sample Output 0
1 2 3 4 5
5 4 3 2 1 0
0 2 4
1 3 5
0 4
a b c d e
v w x y z
 */
package baitap.contest_2;
import java.util.*;
/**
 *
 * @author nmt17
 */
public class VietVongLap {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        for(int i = 1; i <= n; i++){
            System.out.print(i + " ");
        }
        System.out.println();
        int tmp = n;
        while(tmp >= 0){
            System.out.print(tmp + " ");
            tmp--;
        }
        System.out.println();
        for(int i = 0; i <= n; i++){
            if(i % 2 == 0){
                System.out.print(i + " ");
            }
        }
        System.out.println();
        tmp = 0;
        while(tmp <= n){
            if(tmp % 2 != 0){
                System.out.print(tmp + " ");
            }
            tmp++;
        }
          
        for(int i = 0; i <= n; i++){
            if(i % 4 == 0){
                System.out.print(i + " ");
            }
        }
        System.out.println("");
        tmp = 0;
        char c = 'a';
        while(tmp < 5){
            System.out.print((char) c++ + " ");
            tmp++;
        }
        System.out.println("");
        c = 'z';
        for(int i = 0; i < n; i++){
            c--;
        }
        c++;
        for(int i = 0; i < n; i++){
            System.out.print(c++ + " ");
        }
    }
}
