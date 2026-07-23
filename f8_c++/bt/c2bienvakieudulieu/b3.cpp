#include <iostream>
/*
Bài 3: Nhập vào 2 số nguyên a và b. Hãy hoán đổi giá trị của 2 số đó và in ra màn hình.
Ví dụ:

a = 1
b = 2
Gia tri cua a la 1
Gia tri cua b la 2
*/
using namespace std;
int main()
{
	int a, b, c;
	cin >> a >> b;
	c = a;
	a = b;
	b = c;
	cout << a << "\n" << b;
	return 0;
	
}