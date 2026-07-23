/*[Đệ Quy]. Bài 2. Tính tổng 2.

Tính tổng hàm S(n) = 1^2 + 2^2 + 3^2 + 4^2 + .. + n^2 bằng đệ quy. Nếu bạn chưa biết thì S(n) có thể tính nhanh bằng công thức S(n) = n * (n + 1) * (2n + 1) / 6

Input Format
Số nguyên dương n.

Constraints
0≤n≤1000; Chú ý các bạn phải code bằng đệ quy nhé.

Output Format
In ra kết quả của S(n)

Sample Input 0
53

Sample Output 0
51039
 */
package baitap.contest_4;

/**
 *
 * @author nmt17
 */
public class tong2 {
    public static long tong(int n){
        if(n == 1) return 1;
        return n * n + tong(n - 1);
    }
    public static void main(String[] args) {
        System.out.println((long)tong(53));
    }
}
