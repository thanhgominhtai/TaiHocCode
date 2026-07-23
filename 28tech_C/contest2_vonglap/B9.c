/*
[Vòng Lặp]. Bài 9.
Tích các ước Tính tích các ước của số tự nhiên 

		Input Format
		Số nguyên dương N
		Constraints
		1≤N≤1000
		Output Format
		Tích các ước số của N
		
Sample Input 0
10
Sample Output 0
100
*/
#include <stdio.h>
int main()
{
	int n;
	scanf("%d", &n);
	long long times = 1;
	for(int i = 1; i <= n; i++)
	{
		if(n % i == 0)
		{
			times *= i;
		}
	}
	printf("%lld", times);
	return 0;
}