/*
[Mảng 2 Chiều]. Bài
11. Sắp xếp các hàng
của ma trận
Cho ma trận vuông cỡ NxN gồm N hàng, mỗi hàng N cột. Hãy sắp xếp các phần tử của từng hàng của ma
trận theo thứ tự tăng dần.

Input Format
Dòng đầu tiên là số N. N dòng tiếp theo mỗi dòng có N số.
Constraints
1≤n≤200; Các phần tử trong ma trận là số dương không quá 10^9;
Output Format
In ra ma trận sau khi sắp xếp

Sample Input 0
3
2 7 6
1 2 3
9 8 1
Sample Output 0
2 6 7
1 2 3
1 8 9
*/
#include <stdio.h>
void sort(int a[], int n)
{
	for(int i = 0; i < n - 1; i++)
	{
		int min = i;
		for(int j = i + 1; j < n; j++)
		{
			
			if(a[j] < a[min])
			{
				min = j;
			}
		}
		int tmp = a[i];
		a[i] = a[min];
		a[min] = tmp;
	}
}
int main()
{
	int n; scanf("%d", &n);
	int a[n][n];
	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < n; j++)
		{
			scanf("%d", &a[i][j]);
		}
	}
	for(int i = 0; i < n; i++)
	{
		sort(a[i], n);
	}
	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < n; j++)
		{
			printf("%d ", a[i][j]);
		}
		printf("\n");
	}
}