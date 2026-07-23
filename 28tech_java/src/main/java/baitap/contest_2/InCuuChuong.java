/*[Vòng lặp]. Bài 40. In bảng cửu chương

Cho số nguyên dương N, in ra bảng cửu chương từ 1 đến N

Input Format
Dòng duy nhất chứa số nguyên dương N

Constraints
1<=N<=9

Output Format
In ra đáp án của bài toán theo mẫu

Sample Input 0
3

Sample Output 0
1 x 1 = 1
1 x 2 = 2
1 x 3 = 3
1 x 4 = 4
1 x 5 = 5
1 x 6 = 6
1 x 7 = 7
1 x 8 = 8
1 x 9 = 9
1 x 10 = 10


2 x 1 = 2
2 x 2 = 4
2 x 3 = 6
2 x 4 = 8
2 x 5 = 10
2 x 6 = 12
2 x 7 = 14
2 x 8 = 16
2 x 9 = 18
2 x 10 = 20


3 x 1 = 3
3 x 2 = 6
3 x 3 = 9
3 x 4 = 12
3 x 5 = 15
3 x 6 = 18
3 x 7 = 21
3 x 8 = 24
3 x 9 = 27
3 x 10 = 30
 */
package baitap.contest_2;

import java.util.Scanner;

/**
 *
 * @author nmt17
 */
public class InCuuChuong {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        for(int i = 1; i <= n; i++){
            for(int j = 1; j <=10; j++){
                System.out.println(i + " x " + j + " = " + i*j);
            }
            System.out.println("");
        }
    }
}
