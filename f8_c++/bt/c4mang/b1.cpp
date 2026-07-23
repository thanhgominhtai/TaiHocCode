/*
Bài 1: Viết chương trình nhập vào 2 số nguyên dương n và m (0 < n <= 10, 0 < m <= 10). Tạo mảng 2 chiều chứa các số nguyên có n hàng và m cột. Tính và in ra màn hình tổng các phần tử có trong mảng.
Ví dụ:

n = 2
m = 3
Nhap mang:
1 2 3
4 5 6
Tong cac phan tu trong mang la: 21
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
	int tong = 0;
	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < m; j++)
		{
			tong += a[i][j];
		}
	}
	cout << tong;
	return 0;
}