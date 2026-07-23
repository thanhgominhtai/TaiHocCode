/*[Đệ Quy]. Bài 6. Số fibonacci

Dãy số fibonacci là dãy số thỏa mãn : F1=0, F2=1, Fn=Fn-1+Fn-2. Hãy tìm số Fibonacci thứ n sử dụng đệ quy. Độ phức tạp của code đệ quy là O(1.618^n) không thể áp dụng được với n lớn.

Input Format
Số nguyên dương n.

Constraints
1≤n≤15;

Output Format
In ra số Fibonacci thứ n.

Sample Input 0
1

Sample Output 0
0
 */
package baitap.contest_4;

/**
 *
 * @author nmt17
 */
public class Fibonaci {
    public static long fib(int n){
        if (n == 1) return 1;
        if(n == 2) return 1;
        return fib(n - 1) + fib(n - 2);
    }
    public static void main(String[] args) {
        System.out.println((long) fib(6));
    }
}
