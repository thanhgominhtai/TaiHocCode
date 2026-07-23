/*
[Đệ Quy]. Bài 15. Tìm
chữ số đầu tiên của
số nguyên
Cho một số nguyên không âm N, hãy in ra chữ số đầu tiên của N.

Input Format
Số nguyên không âm N
Constraints
0≤n≤10^18
Output Format
In ra chữ số đầu tiên của N.

Sample Input 0
56721
Sample Output 0
5
*/
#include <stdio.h>
int dem(long long n)
{
	if(n < 10)
		return n;
	else 
		return dem(n / 10);
		
}
int main()
{
	int n;
	scanf("%d", &n);
	printf("%lld", dem(n));
}