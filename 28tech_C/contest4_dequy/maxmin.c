/*
[Đệ Quy]. Bài 16.
Chữ số lớn nhất và
nhỏ nhất
Cho một số nguyên không âm N, hãy in ra chữ số lớn nhất và chữ số nhỏ nhất của N. Viết 2 hàm đệ quy

Input Format
Số nguyên dương N
Constraints
10≤n≤10^18
Output Format
Chữ số lớn nhất và nhỏ nhất của N.

Sample Input 0
1256782
Sample Output 0
8 1
*/
#include <stdio.h>
#include <math.h>
int max(long long n)
{n
	if(n < 10)
		return n;
	else 
		return fmax(n % 10, max(n / 10));
		
}
int min(long long n)
{
	if(n < 10)
		return n;
	else
		return fmin(n % 10, min(n / 10));
}
int main()
{
	int n;
	scanf("%d", &n);
	printf("%d %d", max(n), min(n));
}