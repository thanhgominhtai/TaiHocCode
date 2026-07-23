/*
Bài 8: Viết chương trình nhập vào 1 ma trận có n hàng và m cột (0 < n <= 10, 0 < m <= 10). In ra màn hình tổng của các số lẻ xuất hiện trong ma trận.
Ví dụ:

n = 2
m = 3
Nhap ma tran:
1 2 3
4 5 6
Tong cac so le la: 9
*/
#include <iostream>
using namespace std;
int main()
{
	int n, m;
	cin >> n >> m;
	int a[n][m];
	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < m; j++)
		{
			cin >> a[i][j];
		}
	}
	int sum = 0;
	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < m; j++)
		{
			if(a[i][j] % 2 != 0)
			{
				sum += a[i][j];
			}
		}
	}
	cout << sum;
	return 0;
}