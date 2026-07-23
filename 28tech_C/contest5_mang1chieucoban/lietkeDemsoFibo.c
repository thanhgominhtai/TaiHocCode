/*
[Mảng 1 chiều cơ
bản]. Bài 11. Liệt kê
và đếm số fibonacci.
Cho mảng số nguyên A[] gồm N phần tử, hãy liệt kê các số trong mảng là số Fibonacci.

Input Format
Dòng đầu tiên là N : số lượng phần tử trong mảng; Dòng thứ 2 gồm N phần tử viết cách nhau một
khoảng trống.
Constraints
1<=N<=10^6; 0<=A[i]<=10^18
Output Format
In ra các số là số Fibonacci trong dãy theo thứ tự xuất hiện. Nếu trong mảng không tồn tại số Fibonacci
nào thì in ra "NONE".

Sample Input 0
6
1597 25358 7318 5878 0 2634 
Sample Output 0
1597 0
*/
#include <stdio.h>
#include <math.h>
long long f[100];

void fib()
{
	f[0] = 0;
	f[1] = 1;
	for(int i = 2; i <= 90; i++)
	{
		f[i] = f[i - 1] + f[i - 2];
	}
}
int check(long long n)
{
	for(int i = 0; i <= 90; i++)
	{
		if(f[i] == n)
			return 1;
	}
	return 0;
}
int main()
{
	fib();
	int n;
	scanf("%d", &n);
	long long a[n];
	for(int i = 0; i < n; i++)
	{
		scanf("%lld", &a[i]);
	}
	int ok = 0;
	for(int i = 0; i < n; i++)
	{
		if(check(a[i]))
			printf("%lld ", a[i]);
			ok = 1;
	}
	if(!ok) printf("no");
	return 0;
}