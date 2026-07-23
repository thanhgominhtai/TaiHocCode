/*[Mảng 1 chiều cơ bản]. Bài 4. Lớn hơn, nhỏ hơn · Problem

Cho mảng số nguyên A[] gồm N phần tử và số nguyên X, hãy đếm xem trong mảng có bao nhiêu số lớn hơn X và bao nhiêu số nhỏ hơn X.

Input Format
Dòng đầu tiên là số nguyên dương N; Dòng thứ 2 gồm N số nguyên viết cách nhau một vài khoảng trắng; Dòng thứ 3 là số nguyên X

Constraints
1<=N<=1000; -10^3<=A[i], X<=10^3;

Output Format
Dòng 1 in ra các số nhỏ hớn X, dòng 2 in ra các số lớn hơn X

Sample Input 0
5
-798 183 434 850 555
135

Sample Output 0
1
4
 */
package baitap.contest_5;

import java.util.Scanner;

/**
 *
 * @author nmt17
 */
public class LonHonNhohon {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int a[] = new int[5];
        for(int i = 0; i < 5; i++){
            a[i] = sc.nextInt();
        }
        int x = sc.nextInt();
        int nho = 0, lon = 0;
        for(int check : a){
            if(x > check) ++lon;
            else ++nho;
        }
        System.out.println(lon + " " + nho);
    }
}
