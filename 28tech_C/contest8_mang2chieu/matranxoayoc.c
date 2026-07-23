/*
[Mảng 2 Chiều]. Bài
14. Ma trận xoáy ốc
Xây dựng ma trận xoáy ốc cấp N

Input Format
Số nguyên dương N là cấp của ma trận xoáy ốc cần xây dựng.
Constraints
1≤N≤100
Output Format
In ra ma trận xoáy ốc.

Sample Input 0
3
Sample Output 0
1 2 3 
8 9 4 
7 6 5
*/
# include <stdio.h>
int main()
{
	int n; scanf("%d", &n);
	int a[n][n];
	int h1 = 0, h2 = n - 1, c1 = 0, c2 = n - 1;
	int dem = 1;
	while(dem <= n * n)
	{
		for(int i = c1; i <= c2; i++)
		{
			a[h1][i] = dem++;
		}
		++h1;
		for(int i = h1; i <= h2; i++)
		{
			a[i][c2] = dem++;
		}
		--c2;
		for(int i = c2; i >= c1; i--)
		{
			a[h2][i] = dem++;
		}
		h2--;
		for(int i = h2; i >= h1; i--)
		{
			a[i][c1] = dem++;
		}
		++c1;
	}
	for(int i = 0 ; i < n; i++)
	{
		for(int j = 0; j < n; j++)
		{
			printf("%d ", a[i][j]);
		}
		printf("\n");
	}
}