#include <iostream>
/*
Bài 2: Nhập vào 1 chữ cái viết thường bất kì. Hãy in ra màn hình chữ cái đó dưới dạng viết hoa.
Ví dụ:

Chu cai viet thuong: a
Chu cai viet hoa: A
*/
using namespace std;
int main()
{
	char c;
	cin >> c;
	
	cout << (char) (c - 32);
	return 0;
	
}