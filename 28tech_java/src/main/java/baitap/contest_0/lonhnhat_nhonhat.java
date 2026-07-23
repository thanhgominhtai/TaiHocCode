/*
[Làm quen với OJ]. Bài 13. Lớn nhất, nhỏ nhất

Cho 4 số nguyên x, y, z, t. Như bạn đã biết, để tìm số lớn nhất và nhỏ nhất trong 2 số ta có thể sử dụng hàm max, 
min của thư viện math. Ngoài ra để tìm max, min của nhiều số bạn có thể sử dụng hàm max, min của thư viện , ví dụ 
để tìm max của a, b, c có thể dùng max({a, b, c}), chú ý đặt các biến vào trong ngoặc nhọn nếu muốn tìm max, min 
của 3 số trở lên. Bài toán yêu cầu bạn tìm những số sau : Dòng 1 in ra số lớn hơn trong 2 số x, y. Dòng 2 in ra 
số nhỏ hơn trong 2 số z, t. Dòng 3 in ra số lớn nhất trong 3 số x, y, z. Dòng 4 in ra số nhỏ nhất trong 4 số x, 
y, z, t. Ví dụ tìm max, min của 3 số :

#include <algorithm>
int a = 20, b = 30, c = 40;
cout << max({a, b, c}) << endl;
cout << min({a, b, c}) << endl;

Input Format
4 số x, y, z, t lần lượt trên 4 dòng.

Constraints
1<=x, y, z, t <= 1000;

Output Format
In ra 4 dòng theo yêu cầu.

Sample Input 0
586
617
778
37

Sample Output 0
617
37
778
37
 */
package baitap.contest_0;

import java.util.Scanner;


public class lonhnhat_nhonhat {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int x = sc.nextInt(), y = sc.nextInt(), z = sc.nextInt(), t = sc.nextInt();
        System.out.println(Math.max(x, y));
        System.out.println(Math.min(z, t));
        System.out.println(Math.max(Math.max(x, y), z));
        System.out.println(Math.min(Math.min(x, y), Math.min(z, t)));
    }
}
