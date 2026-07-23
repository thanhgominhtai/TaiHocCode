/*
Bài 4: Viết chương trình nhập vào 2 số nguyên dương n và m (2 <= n <= 10, 2 <= m <= 10). Tạo mảng 2 chiều chứa các số nguyên có n hàng và m cột. Tính tổng các giá trị biên của mảng vừa tạo.
Ví dụ:

n = 3
m = 3
Nhap mang:
1 2 3
4 5 6
7 8 9
Tong cac gia tri bien la: 40
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
			if(i != 0 && i != n-1 && j != 0 && j != n-1)
			{
				continue;
			}else tong += a[i][j];
		}
	}
	cout << tong;
	return 0;
}