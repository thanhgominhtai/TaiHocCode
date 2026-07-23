/*
[Mảng 2 Chiều]. Bài
3. Số lớn nhất và nhỏ
nhất trong ma trận
Cho ma trận cỡ NxM gồm N hàng, mỗi hàng M cột. Hãy tìm số nhỏ nhất trong ma trận và số lớn nhất
trong ma trận, sau đó liệt kê các vị trí xuất hiện của các phần tử này trong ma trận.

Input Format
Dòng đầu tiên là 2 số N và M. N dòng tiếp theo mỗi dòng có M số.
Constraints
1≤n,m≤205; Các phần tử trong ma trận là số dương không quá 10^9.
Output Format
Dòng đầu tiên in ra số nhỏ nhất trong ma trận, các dòng tiếp theo liệt kê các vị trí của số này trong ma
trận. Dòng tiếp theo in ra số lớn nhất trong ma trận, các dòng tiếp theo liệt kê các vị trí của số này trong
ma trận. Xem test case mẫu để rõ hơn.

Sample Input 0
3 3
1 2 1
4 5 6
7 8 9
Sample Output 0
1
1 1
1 3
9
3 3
*/
#include <stdio.h>
#include <math.h>
int main()
{
	int n, m; scanf("%d%d", &n, &m);
	int a[n][m];
	int min = 1e9, max = -1;
	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < m; j++)
		{
			scanf("%d", &a[i][j]);
			min = fmin(min, a[i][j]);
			max = fmax(max, a[i][j]);
		}
	}
	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < m; j++)
		{
			if(min == a[i][j])
			{
				printf("%d\n", min);
				printf("%d %d\n", i + 1, j + 1);
			}
			if(max == a[i][j])
			{
				printf("%d\n", max);
				printf("%d %d\n", i + 1, j + 1);
			}
		}
	}
	
}