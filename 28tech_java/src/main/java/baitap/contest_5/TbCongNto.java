/*[Mảng 1 chiều cơ bản]. Bài 2. Trung bình cộng nguyên tố

Cho mảng số nguyên A[] gồm N phần tử, nhiệm vụ của bạn là tính trung bình cộng của các số là số nguyên tố trong dãy. Dữ liệu đảm bảo có ít nhất 1 phần tử là số nguyên tố trong dãy.

Input Format
Dòng đầu tiên là số nguyên dương N; Dòng thứ 2 gồm N số nguyên viết cách nhau một vài khoảng trắng

Constraints
1<=N<=1000; -10^3<=A[i]<=10^3;

Output Format
In ra đáp án của bài toán lấy 3 số sau dấu phẩy.

Sample Input 0
5
-911 234 151 347 231

Sample Output 0
249.000

Sample Input 1
3
1 2 5

Sample Output 1
3.500
 */
package baitap.contest_5;

import java.util.Scanner;

/**
 *
 * @author nmt17
 */

public class TbCongNto {
    public static boolean checkNt(int n){
        if(n < 2) return false;
        for(int i = 2; i <= Math.sqrt(n); i++){
            if(n % i == 0) return false;
        }
        return true;
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int tong = 0;
        int dem = 0;
        int[] a = new int[n];
        for(int i = 0; i < n; i++){
            a[i] = sc.nextInt();
        }
        
        for(int i = 0; i < n; i++){
            if(checkNt(a[i])){
                tong += a[i];
                ++dem;
            }
        }
        System.out.printf(" %.3f", (double) tong / dem);
    }
}
