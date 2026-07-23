/*
[Làm quen với OJ]. Bài 1. Print Hello World !
Nhiệm vụ của bạn ở bài tập này rất đơn giản, bạn hãy nhập vào 1 số nguyên x và in ra 3 dòng : Dòng 1 là số x bạn vừa nhập từ bàn phím, Dòng 2 in ra dòng chữ "Hello World !" và dòng 3 in ra "28tech C++ programming !"
Input Format
1 dòng duy nhất chứa số nguyên x
Constraints
1<=x<=1000;
Output Format
In ra 3 dòng theo yêu cầu
Sample Input 0
5
Sample Output 0
5
Hello World !
28tech C++ programming !
 */
package baitap.contest_0;

import java.util.Scanner;

public class inHelloWorld {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int a = sc.nextInt();
        System.out.printf("%d\nHello World !\n28tech C++ programming !", a);
    }
}
