/*
[Mảng 2 Chiều]. Bài
13. Nhân 2 ma trận.
Cho ma trận A cỡ NxM, ma trận B cỡ MxP. Hãy tính ma trận tích của A và B.

Input Format
Dòng đầu tiên là 3 số N, M, P; N dòng tiếp theo, mỗi dòng M của ma trận A; M dòng tiếp theo, mỗi dòng
P số của ma trận B
Constraints
1≤N,M,P≤50; Các phần tử trong ma trận là số dương không quá 100000;
Output Format
In ra ma trận tích của A và B

Sample Input 0
3 4 5
1 2 3 4
5 6 7 8
9 10 11 12
1 2 3 4 5
6 7 8 9 10
11 12 13 14 15
16 17 18 19 20
Sample Output 0
110 120 130 140 150
246 272 298 324 350
382 424 466 508 550
*/
#include <stdio.h>
int main()
{
	int n, m, p; scanf("%d%d%d", &n, &m, &p);
	int a[n][m], b[m][p], c[n][p];
	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < m; j++)
		{
			scanf("%d", &a[i][j]);
		}
	}
	for(int i = 0; i < m; i++)
	{
		for(int j = 0; j < p; j++)
		{
			scanf("%d", &b[i][j]);
		}
	}
	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < p; j++)
		{
			c[i][j] = 0;
			for(int k = 0; k < m; k++)
			{
				c[i][j] += a[i][k] * b[k][j];
			}
		}
	}
	printf("\n");
	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < p; j++)
		{
			printf("%d ", c[i][j]);
		}
		printf("\n");
	}
}