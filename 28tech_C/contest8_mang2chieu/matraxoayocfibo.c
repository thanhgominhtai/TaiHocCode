/*
[Mảng 2 Chiều]. Bài
15. Ma trận xoáy ốc
Fibonacci
In ra ma trận xoáy ốc cấp N, với các số trong ma trận đều là các số trong dãy Fibonacci.

Input Format
Số nguyên dương N
Constraints
1≤N≤9
Output Format
Ma trận xoáy ốc cấp N

Sample Input 0
3
Sample Output 0
0 1 1 
13 21 2 
8 5 3
*/
# include <stdio.h>
long long fi[100];
void fibo()
{
	fi[0] = 0;
	fi[1] = 1;
	for(int i = 2; i <= 90; i++)
	{
		fi[i] = fi[i - 1] + fi[i - 2];
	}
}
int main()
{
	fibo();
	int n; scanf("%d", &n);
	long long a[n][n];
	int h1 = 0, h2 = n - 1, c1 = 0, c2 = n - 1;
	int dem = 0;
	while(dem < n * n)
	{
		for(int i = c1; i <= c2; i++)
		{
			a[h1][i] = fi[dem++];
		}
		++h1;
		for(int i = h1; i <= h2; i++)
		{
			a[i][c2] = fi[dem++];
		}
		--c2;
		for(int i = c2; i >= c1; i--)
		{
			a[h2][i] = fi[dem++];
		}
		h2--;
		for(int i = h2; i >= h1; i--)
		{
			a[i][c1] = fi[dem++];
		}
		++c1;
	}
	for(int i = 0 ; i < n; i++)
	{
		for(int j = 0; j < n; j++)
		{
			printf("%lld ", a[i][j]);
		}
		printf("\n");
	}
}