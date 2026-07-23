/*
* [Mảng 1 Chiều].Bài 1 : Các bài toán cơ bản trên mảng.

Cho mảng số nguyên gồm N phần tử. Thực hiện in ra các yêu cầu sau đây. (Bài này đúng là được nhé mọi người, TLE không sao cả vì test to quá)

Input Format
Dòng đầu tiên là số lượng phần tử trong mảng. Dòng thứ 2 là N phần tử trong mảng.

Constraints
2≤n≤10^6; -10^9≤ai≤10^9

Output Format
Dòng đầu tiên ghi số lớn nhất trong mảng kèm theo vị trí của nó (bắt đầu từ 0), nếu có nhiều số cùng có giá trị lớn nhất thì lấy vị trí xuất hiện đầu tiên. Dòng thứ 2 ghi số nhỏ nhất trong mảng kèm theo vị trí của nó (bắt đầu từ 0), nếu có nhiều số cùng có giá trị nhỏ nhất thì lấy vị trí xuất hiện cuối cùng. Dòng thứ 3 ghi ra số lượng số nguyên tố xuất hiện trong dãy. Dòng thứ 4 ghi ra tích lớn nhất của 2 số trong mảng (2 số khi nhân với nhau tạo ra tích lớn nhất). Dòng thứ 5 in ra YES nếu mảng đối xứng, ngược lại in ra NO. Dòng thứ 6 tính tích các số trong mảng, kết quả lấy dư với (10^9+7)

Sample Input 0
6
-10 -10 2 3 4 5

Sample Output 0
5 5
-10 1
3
100
NO
12000
* */

package baitap.contest_6;

import java.util.ArrayList;
import java.util.Scanner;

public class CacBaiToan {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        ArrayList<Integer> list = new ArrayList<Integer>();
        for (int i = 0; i < n; i++) {
            list.add(sc.nextInt());
        }
        int max = 0, pos = 0;
        for(int num : list){
            max = Math.max(max, num);
        }
        for(int num : list){
            if(num == max){
               break;
            }
            ++pos;
        }
        System.out.println(max + " " + pos);
        //2
        int min = 0, pos2 = list.size() - 1;
        for(int num : list){
            min = Math.min(min, num);
        }
        for(int i = list.size() - 1; i >= 0; i--){
            if(min == list.get(i)){
                break;
            }
            --pos2;
        }
        System.out.println(min + " " + pos2);
        //3
        int nt = 0;
        for(int i = 0; i < list.size() - 1; i++){
            if(list.get(i) < 2) continue;
            for(int j = 2; j <= Math.sqrt(list.get(i)); j++){
                if(list.get(i) % j == 0) continue;
            }
            ++nt;
        }
        System.out.println(nt);
        //4
        max = 0;
        for(int i = 0; i < list.size() - 1; i++){
            for(int j = i + 1; j < list.size(); j++){
                max = Math.max(max, list.get(i) * list.get(j));
            }
        }
        System.out.println(max);
        //5
        ArrayList<Integer> clone = new ArrayList<Integer>(n);
        for(int num : list){
            clone.add(num);
        }
        int check = 1;
        for(int i = 0; i < list.size() - 1; i++){
            if(clone.get(i) != list.get(i)) check = 0; break;
        }
        if(check == 1){
            System.out.println("yes");
        }else System.out.println("no");
        //6
        long tich = 1;
        for(int num : list){
            tich *= num;
        }
        System.out.println(tich);
    }
}