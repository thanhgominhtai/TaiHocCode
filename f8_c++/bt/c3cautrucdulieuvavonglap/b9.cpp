/*
Bài 9: Viết chương trình nhập vào một số nguyên dương n từ bàn phím. Tính tổng các chữ số tạo nên số đó.
Ví dụ:

n = 2023
Ket qua la 7
*/
#include <iostream>
using namespace std;
int main()
{
	int n, tong = 0;
	cin >> n;
	while(n)
	{
		tong += n % 10;
		n /= 10;
	}
	cout << tong;
}