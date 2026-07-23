/*
Bài 6: Viết chương trình nhập vào số nguyên dương n (n <= 100). Tính và hiển thị tổng các số tự nhiên lẻ từ 1 đến n.
Ví dụ:

n = 10
Ket qua la 25
*/
#include <iostream>
using namespace std;
int main()
{
	int n, tong = 0;
	cin >> n;
	for(int i = 1; i <= n; i++)
	{
		if(i % 2 != 0)
		{
			tong += i;
		}
	}
	cout << tong;
	return 0;
}