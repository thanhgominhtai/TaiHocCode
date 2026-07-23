/*
* [Mảng 1 Chiều]. Bài 2. Kiểm tra mảng tăng dần.

Kiểm tra xem mảng đã cho có tăng chặt hay không, tức là các phần tử đứng sau luôn lớn hơn phần tử đứng trước nó.

Input Format
Dòng đầu tiên là số lượng phần tử trong mảng. Dòng thứ 2 là N phần tử trong mảng.

Constraints
1≤n≤10^6; 1≤ai≤10^9

Output Format
In YES nếu các phần tử trong mảng tăng dần, ngược lại in NO.

Sample Input 0
6
1 2 3 8 9 22

Sample Output 0
YES

Sample Input 1
5
1 2 8 8 10

Sample Output 1
NO
* */
package baitap.contest_6;

import java.util.ArrayList;
import java.util.Scanner;

public class KtTangDan {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        ArrayList<Integer> list = new ArrayList<Integer>();
        int n = sc.nextInt();
        for(int i = 0; i < n; i++){
            list.add(sc.nextInt());
        }
        int check = 1;
        for(int i = 0; i < list.size() - 1; i++){
            if(list.get(i) < list.get(i+1)){
                continue;
            }else check = 0; break;
        }
        if(check == 1){
            System.out.println("yes");
        }else System.out.println("no");
    }
}
