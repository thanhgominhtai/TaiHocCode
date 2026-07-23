/*
[Hàm, Lý Thuyết Số].
Fibonacci 1
Nhiệm vụ của bạn là in ra N số Fibonacci đầu tiên, một số đầu tiên trong dãy Fibonacci là 1, 1, 2, 3, 5,
8....

Input Format
Dòng duy nhất chứa số nguyên dương N
Constraints
1<=N<=92
Output Format
In ra N số Fibonacci đầu tiên, mỗi số trên 1 dòng
Sample Input 0

Sample Input 0
6
Sample Output 0
1
1
2
3
5
8
*/
#include <stdio.h>
void fibo(int n)
{
	int a = 1, b = 0;
	if(n == 0 || n == 1)
		printf("%d", n);
	else
	{
		printf("0 ");
		printf("1 ");
		for(int i = 2; i <= n; i++)
		{
			int tmp = a;
			a = a + b;
			b = tmp;
			printf("%d ", a);
		}
	}
}
int main()
{
	int n;
	scanf("%d", &n);
	fibo(n);
	return 0;
}