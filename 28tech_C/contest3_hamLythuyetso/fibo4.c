/*
[Hàm, Lý Thuyết Số].
Fibonacci 3
Nhiệm vụ của bạn là hãy tìm số thuộc dãy số Fibonacci nhỏ nhất lớn hơn hoặc bằng số N đã cho. Biết một
số đầu tiên trong dãy Fibonacci là : 1, 1, 2, 3, 5, 8, 13...

Input Format
Dòng duy nhất chứa số nguyên dương N
Constraints
1<=N<=10^18
Output Format
In ra số Fibonacci nhỏ nhất lớn hơn hoặc bằng N

Sample Input 0
12
Sample Output 0
13
*/
#include <stdio.h>
#include <math.h>
int fibo(long long n)
{
	long long a = 1, b = 0;
	if(n == 0 || n == 1)
		return 1;
	else
	{
		for(int i = 2; i <= 30; i++)
		{
			long long tmp = a;
			a = a + b;
			b = tmp;
			if(a == n)
				return 1;
		}
	}
	return 0;
}
int nt(int n)
{
	for(int i = 2; i <= sqrt(n); i++)
	{
		if(n % i != 0)
			return 0;
	}
	return n > 1;
}
int tong(int n)
{
	int sum = 0;
	while(n)
	{
		sum += n % 10;
		n /= 10;
	}
	if(fibo(sum))
		return 1;
	else return 0;
}

int main()
{
	long long n;
	scanf("%lld", &n);
	for(int i = 1; i <= n; i++)
	{
		if(nt(i) && tong(i))
			printf("%d", i);
	}
	return 0;
}