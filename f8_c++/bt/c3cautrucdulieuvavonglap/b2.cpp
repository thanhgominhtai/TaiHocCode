/*
Bài 2: Nhập 1 số nguyên dương n. In ra màn hình giá trị của S = 1^2 + 2^2 + 3^2 + ... + n^2.
Ví dụ:

n = 4
S = 30
*/
#include <iostream>
using namespace std;
int main()
{
	int n, tong = 0;
	cin >> n;
	for(int i = 1; i <= n; i++)
	{
		tong += i * i;
	}
	cout << tong;
	return 0;
}