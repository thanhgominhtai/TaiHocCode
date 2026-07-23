/*
Bài 3: Viết chương trình nhập vào 2 số nguyên dương n và m (0 < n <= 10, 0 < m <= 10). Tạo mảng 2 chiều chứa các số nguyên có n hàng và m cột. In ra màn hình các phần tử lớn nhất của các hàng.
Ví dụ:

n = 2
m = 3
Nhap mang:
1 2 3
4 6 5
Cac phan tu lon nhat la: 3 6
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
	for(int i = 0; i < n; i++)
	{
		int max = -1;
		for(int j = 0; j < m; j++)
		{
			max = max > a[i][j] ? max : a[i][j];
		}
		cout << max << " ";
	}
	return 0;
}