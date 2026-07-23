/*[Mảng 1 chiều cơ bản]. Bài 3. Số nhỏ nhất

Cho mảng số nguyên A[] gồm N phần tử, hãy đếm xem trong mảng của bạn có bao nhiêu số có cùng giá trị nhỏ nhất. Ví dụ mảng A = {1, 2, 1, 3, 5} thì số nhỏ nhất trong mảng là 1 xuất hiện 2 lần.

Input Format
Dòng đầu tiên là số nguyên dương N; Dòng thứ 2 gồm N số nguyên viết cách nhau một vài khoảng trắng

Constraints
1<=N<=1000; -10^3<=A[i]<=10^3;

Output Format
In ra đáp án của bài toán

Sample Input 0
5
-854 600 222 472 207

Sample Output 0
1
 */
package baitap.contest_5;

import java.util.Scanner;

/**
 *
 * @author nmt17
 */
public class SoNhoNhat {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int a[] = new int[5];
        for(int i= 0; i < 5; i++){
            a[i] = sc.nextInt();
        }
        int min = 10000000;
        for(int x : a){
            min = Math.min(min, x);
        }
        int dem = 0;
        for(int x : a){
            if(x == min) ++dem; 
        }
        System.out.println(dem);
    }
}
