/*
[Vòng lặp]. Bài 11. Tổng chẵn lẻ
Tính tổng : S= -1 + 2 - 3 + 4 - 5 + ...... + (-1)^n*n

	Input Format
	Số nguyên dương n
	Constraints
	1≤n≤10^6
	Output Format
	Kết quả của bài toán

Sample Input 0
6
Sample Output 0
3
*/
#include <stdio.h>
int main()
{
	int n;
	scanf("%d", &n);
	long long s = 0;
	for(int i = 1; i <= n; i++)
	{
		if(i % 2 != 0)
		{
			s -= i;
		}
		else if(i % 2 == 0)
		{
			s += i;
		}
	}
	printf("%lld", s);
}