/*
Bài 2: Viết chương trình nhập vào số nguyên dương n (0 < n <= 10). Tạo mảng 1 chiều có n phần tử là số nguyên và in ra màn hình phần tử có giá trị lớn nhất.
Ví dụ:

n = 3
Nhap mang: 1 3 2
Gia tri lon nhat la: 3
*/
#include <iostream>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int a[n];
	for(int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	int max = -1;
	for(int i = 0; i < n; i++)
	{
		max = max > a[i] ? max : a[i];
	}
	cout << max;
	return 0;
}