/*
[Mảng 1 chiều cơ
bản]. Bài 20.1. Lớn
hơn liền kề
Cho mảng số nguyên A[] gồm N phần tử, nhiệm vụ của bạn là liệt kê các phần tử trong mảng thỏa mãn
nó lớn hơn cả phần tử đứng trước và phần tử đứng sau nó. 2 phần tử đầu tiên và cuối cùng của mảng
không được coi là thỏa mãn.

Input Format
Dòng đầu tiên là số nguyên dương N; Dòng thứ 2 gồm N số nguyên viết cách nhau một vài khoảng trắng
Constraints
1<=N<=1000; 0<=A[i]<=10^3;
Output Format
In ra các số thỏa mãn trên 1 dòng

Sample Input 0
7
341 607 986 616 131 857 234 
Sample Output 0
986 857
*/
#include <stdio.h>
int main()
{
	int n;
	scanf("%d", &n);
	int a[n];
	for(int i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
	}
	for(int i = 1; i < n - 1; i++)
	{
			if(a[i] > a[i - 1] && a[i] > a[i + 1]) 
			{
				printf("%d ", a[i]);
			}
	}
	return 0;
}