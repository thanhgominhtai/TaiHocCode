/*[Đệ Quy]. Bài 5. Tính giai thừa

Tính n giai thừa bằng đệ quy.

Input Format
Số nguyên dương N.

Constraints
0≤n≤10;

Output Format
Kết quả của N!

Sample Input 0
6

Sample Output 0
720
 */
package baitap.contest_4;

/**
 *
 * @author nmt17
 */
public class GiaiThua {
    public static void main(String[] args) {
        System.out.println((long) gt(6));
    }
    public static long gt(int n){
        if(n == 1) return 1;
        return n * gt(n - 1);
    }
}
