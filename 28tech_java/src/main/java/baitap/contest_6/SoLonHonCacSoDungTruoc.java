/*
*[Mảng 1 Chiều].Bài 3. Số lớn hơn các số đứng trước

Cho một dãy số nguyên dương có n phần tử. Hãy liệt kê số các phần tử trong dãy lớn hơn tất cả các số đứng trước nó (Phần tử đầu tiên được coi là một phần tử thỏa mãn).

Input Format
Dòng đầu tiên là số lượng phần tử trong mảng. Dòng thứ 2 là N phần tử trong mảng.

Constraints
2≤n≤10^6; 1≤ai≤10^9

Output Format
Liệt kê các số thỏa mãn

Sample Input 0
6
2 6 1 3 9 9

Sample Output 0
2 6 9
* */
package baitap.contest_6;

import java.util.ArrayList;
import java.util.Scanner;

public class SoLonHonCacSoDungTruoc {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        ArrayList<Integer> list = new ArrayList<Integer>();
        for(int i = 0; i < n; i++){
            list.add(sc.nextInt());
        }
        for(int i = 0; i < n; i++){
            int max = list.get(i);
            int tmp = 0;
            for(int j = 0; j < i; j++){
                tmp = Math.max(tmp, list.get(j));
            }
            if(max > tmp) System.out.println(list.get(i));
        }
    }
}
