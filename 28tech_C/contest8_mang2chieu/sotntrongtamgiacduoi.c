/*
[Mảng 2 Chiều]. Bài
4. Số thuận nghịch
trong tam giác dưới.
Cho ma trận vuông cỡ NxN gồm N hàng, mỗi hàng N cột. Hãy đếm các số thuận nghịch thuộc tam giác
dưới của ma trận trên.

Input Format
Dòng đầu tiên là số N. N dòng tiếp theo mỗi dòng có N số.
Constraints
1≤n≤205; Các phần tử trong ma trận là số dương không quá 10^9.
Output Format
In ra số lượng số thuận nghịch trong ma trận.

Sample Input 0
3
1 2 3
22 14 56
76 5 4
Sample Output 0
4
Explanation 0
4 số là số thuận nghịch thuộc tam giác dưới là : 1, 22, 4, 5
*/
#include <stdio.h>
int tn(int n)
{
	int lat = 0, tmp = n;
	while(n != 0)
	{
		lat = lat * 10 + n % 10;
		n /= 10;
	}
	return tmp == lat;
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
	int dem = 0;
	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j <= i; j++)
		{
			if(tn(a[i][j]))
			{
				++dem;
			}
		}
	}
	printf("%d", dem);
}