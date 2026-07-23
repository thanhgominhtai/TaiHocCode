/*
[Hàm, Lý Thuyết Số].
Bài 23. Tổng ước số
Tính tổng ước của 1 số nguyên dương N.


	Input Format
	1 số nguyên dương N
	Constraints
	1≤N≤10^12.
	Output Format
	Tổng ước số của N

Sample Input 0
100
Sample Output 0
217
Sample Input 1
28
Sample Output 1
56
*/
#include <stdio.h>
#include <stdio.h>
long long uoc(int n)
{
	long long sum = 0;
	for(int i = 1; i <= sqrt(n);  i++)
	{
		if(n % i == 0)
		{
			sum += i;
			if(i != n/i)
				sum += n/i;
		}
	}
	return sum;
}
int main()
{
	int n;
	scanf("%d", &n);
	printf("%lld", uoc(n));
	return 0;
}