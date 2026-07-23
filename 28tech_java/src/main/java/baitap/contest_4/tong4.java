/*[Đệ Quy]. Bài 4. Tính tổng 4

Tính tổng hàm S(n) = -1 + 2 -3 + 4 - 5 + 6 + ... + (-1)^n * n bằng đệ quy. Nếu bạn chưa biết thì S(n) có thể tính nhanh bằng công thức Nếu N chẵn thì S(n) = n / 2, còn nếu N lẻ thì S(n) = (n - 1) / 2 - n

Input Format
Số nguyên dương n.

Constraints
1≤n≤10^3; Chú ý các bạn phải code bằng đệ quy nhé.

Output Format
In ra kết quả của S(n)

Sample Input 0
919

Sample Output 0
-460
 */
package baitap.contest_4;

/**
 *
 * @author nmt17
 */
public class tong4 {
    public static void main(String[] args) {
        System.out.println((int)tong(919));
    }
    public static int tong(int n){
        if(n == 1)return -1;
        if(n % 2 != 0) return -n + tong(n - 1);
        return n + tong(n - 1);
    }
}
