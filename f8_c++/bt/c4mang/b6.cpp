/*
Bài 6: Viết chương trình nhập vào 1 số nguyên n (2 <= n <= 10). Nhập mảng có n số nguyên và nhập số nguyên k. Hãy kiểm tra xem trong mảng có xuất hiện 2 phần tử có tổng bằng k hay không, nếu có hãy in ra màn hình vị trí của 2 phần tử đó (lấy 2 vị trí đầu tiên tìm được).
Ví dụ:

n = 4
Nhap mang: 1 2 3 4
k = 3
Ket qua: 0 1
*/
#include <iostream>
using namespace std;
int main()
{
	int n, k;
	cin >> n;
	int a[10];
	for(int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	cin >> k;
	int e, f;
	for(int i = 0; i < n; i++)
	{
		int sum = 0;
		for(int j = i; j < n; j++)
		{
			sum += a[j];
			if(sum == k)
			{
				e = i;
				f = j;
				goto kq;
			}
		}
	}
	kq:
	cout << e << " " << f;
	return 0;
}