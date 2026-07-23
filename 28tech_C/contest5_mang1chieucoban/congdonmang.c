/*
[Mảng 1 chiều cơ
bản]. Bài 23. Mảng
cộng dồn
Cho mảng số nguyên A[] gồm N phần tử, nhiệm vụ của bạn là xây dựng mảng F cũng có N phần tử trong
đó F[0] = A[0] và F[i] = F[i -1] + A[i] với mọi i >= 1. Như vậy bạn thử nghĩ xem F[i] lưu giá trị gì?

Input Format
Dòng đầu tiên là số nguyên dương N; Dòng thứ 2 gồm N số nguyên viết cách nhau một vài khoảng trắng
Constraints
1<=N<=1000; 0<=A[i]<=10^3;
Output Format
In ra mảng cộng dồn F

Sample Input 0
5
124 577 658 919 87 
Sample Output 0
124 701 1359 2278 2365 
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
	int f[n];
	f[0] = a[0];
	for(int i = 1; i < n; i++)
	{
		f[i] = f[i - 1] + a[i];
	}
	for(int i = 0; i < n; i++)
	{
		printf("%d ", f[i]);
	}
}