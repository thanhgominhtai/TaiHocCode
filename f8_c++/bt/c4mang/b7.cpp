/*
Bài 7: Viết chương trình nhập vào 2 ma trận có n hàng và m cột (0 < n <= 10, 0 < m <= 10). In ra tổng của 2 ma trận.
Gợi ý:

Phép cộng 2 ma trận là việc cộng các phần tử có vị trí tương ứng của 2 ma trận đó
Ví dụ:

n = 2
m = 3
Nhap ma tran 1:
1 2 3
1 2 3
Nhap ma tran 2:
2 3 4
2 3 4
Tong 2 ma tran:
3 5 7 
3 5 7 
*/
#include <iostream>
using namespace std;
int main()
{
	int n, m;
	cin >> n >> m;
	int a[n][m], b[n][m];
	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < m; j++)
		{
			cin >> a[i][j];
		}
	}
	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < m; j++)
		{
			cin >> b[i][j];
		}
	}
	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < m; j++)
		{
			cout << a[i][j] + b[i][j] << " ";
		}
		cout << "\n";
	}
	return 0;
}