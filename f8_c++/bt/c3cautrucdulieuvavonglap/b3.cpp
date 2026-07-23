/*
Bài 3: Nhập 1 số nguyên dương n. In ra màn hình giai thừa n!.
Ví dụ:

n = 3
n! = 6
*/
#include <iostream>
using namespace std;
int main()
{
	int n, gt = 1;
	cin >> n;
	for(int i = n; i > 0; i--)
	{
		gt *=  i;
	}
	cout << gt;
	return 0;
}