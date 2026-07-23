/*
[Đệ Quy]. Bài 17. In
ra số nguyên
Cho một số nguyên không âm N, hãy in ra N theo thứ tự các chữ số từ trái qua phải và từ phải qua trái.
Chú ý phải sử dụng hàm đệ quy cho cả 2 yêu cầu.


Input Format
Số nguyên không âm N.
Constraints
0≤n≤10^18
Output Format
Dòng đầu tiên in ra các chữ số của n theo thứ tự từ trái qua phải. Dòng thứ hai in ra các chữ số của n
theo thứ tự từ phải qua trái. Các chữ số được viết cách nhau một dấu cách.

Sample Input 0
21218
Sample Output 0
2 1 2 1 8 
8 1 2 1 2 
*/
#include <stdio.h>
#include <math.h>
void traisang(long long n)
{
	if(n < 10)
	{
		printf("%d ", n);
	}
	else
	{ 
		traisang(n / 10);
		printf("%d ", n % 10);
	}
}
void phaisang(long long n)
{
	if(n < 10)
	{
		printf("%d ", n);
		return;
	}
	else
		printf("%d ", n % 10);
		phaisang(n / 10);
}
int main()
{
	int n;
	scanf("%d", &n);
	traisang(n);
	printf("\n");
	phaisang(n);
}