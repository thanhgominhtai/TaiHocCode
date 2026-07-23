/*
[Mảng 2 Chiều]. Bài
1. Liệt kê các số
nguyên tố trong mảng 2 chiều
Cho ma trận cỡ NxM gồm N hàng, mỗi hàng M cột. Hãy liệt kê các số nguyên tố theo từng hàng trong ma
trận.

Input Format
Dòng đầu tiên là 2 số N và M. N dòng tiếp theo mỗi dòng có M số.
Constraints
1≤n,m≤500; Các phần tử trong ma trận là số dương không quá 10^9.
Output Format
In ra các số nguyên tố trong ma trận theo từng dòng

Sample Input 0
3 3
1 2 3
4 5 6
7 8 9
Sample Output 0
2 3
5
7
*/
#include <stdio.h>
#include <math.h>
int nt(int n)
{
	for(int i = 2; i <= sqrt(n); i++)
	{
		if(n % i == 0)
		{
			return 0;
		}
	}
	return n > 1;
}
int main()
{
	int n, m; scanf("%d%d", &n, &m);
	int a[n][m];
	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < m; j++)
		{
			scanf("%d", &a[i][j]);
		}
	}
	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < m; j++)
		{
			if(nt(a[i][j]))
				printf("%d ", a[i][j]);
		}
	}
}