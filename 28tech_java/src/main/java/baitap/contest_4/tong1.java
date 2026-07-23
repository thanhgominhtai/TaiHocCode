/*[Đệ Quy]. Bài 1. Tính tổng 1.

Tính tổng hàm S(n) = 1 + 2 + 3 + 4 + .. + n bằng đệ quy. Nếu bạn chưa biết thì S(n) có thể tính nhanh bằng công thức S(n) = n * (n + 1) / 2

Input Format
Số nguyên dương n.

Constraints
0≤n≤1000; Chú ý các bạn phải code bằng đệ quy nhé.

Output Format
In ra S(n).

Sample Input 0
773

Sample Output 0
299151
 */
package baitap.contest_4;

import java.util.Scanner;

/**
 *
 * @author nmt17
 */
public class tong1 {
    
    public static void main(String[] args) {
        System.out.println(tong(773));
    }
    
    public static int tong(int n){
       if(n == 1)
       {
           return 1;
       }
        return n + tong(n - 1);   
    }
}
