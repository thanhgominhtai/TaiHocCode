#include <math.h>
#include <iostream>
/*
Bài 4: Nhập vào 2 số nguyên dương a và b (a và b không trùng giá trị). Hãy in ra màn hình số nhỏ hơn (không dùng cấu trúc if else hoặc toán tử 3 ngôi).
Ví dụ:

a = 1
b = 2
Gia tri nho hon la 1
*/
using namespace std;
int main()
{
	int a, b, c;
	cin >> a >> b;
	int hieu = abs(a - b);
	int tong = a + b;
	cout << (tong - hieu) / 2;
	return 0;
	
}