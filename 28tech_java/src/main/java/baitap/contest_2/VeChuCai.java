/*[Vòng lặp]. Bài 39. Vẽ hình chữ cái

Cho N là số nguyên dương, in ra hình tương ứng.

Input Format
Dòng duy nhất chứa số nguyên dương N

Constraints
5<=N<=25

Output Format
In ra hình tương ứng

Sample Input 0
6

Sample Output 0
ABCDEF
bcdefg
CDEFGH
defghi
EFGHIJ
fghijk
 */
package baitap.contest_2;
import java.util.Scanner;
/**
 *
 * @author nmt17
 */
public class VeChuCai {
    public static void main(String[] args) {
        Scanner sc =new Scanner(System.in);
        int n = sc.nextInt();
        char c = 'a';
        for(int i = 1; i <= n; i++){
            for(int j = 1; j <= n; j++){
                if(i % 2 == 0){
                    System.out.print(c++ + " ");
                }else System.out.print(Character.toUpperCase(c++) + " ");
            }
            c = (char)(c - (n - 1));
            System.out.println("");
        }
    }
}
