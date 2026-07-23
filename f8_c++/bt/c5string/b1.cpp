/*
Bài 1: Viết chương trình nhập vào 1 chuỗi gồm các ký tự từ a -> z và có thể chứa khoảng trắng. Hãy loại bỏ các khoảng trắng ở đầu và cuối chuỗi.
Ví dụ:

Nhap chuoi:     f8 fullstack   
Ket qua: f8 fullstack
*/
#include <iostream>
using namespace std;
int main()
{
	string str;
	getline(cin, str);
	while(str[0] == ' ')
	{
		str.erase(0, 1);
	}
	while(str[str.length() - 1] == ' ')
	{
		str.erase(str.length() - 1, 1);
	}
	cout << str;
	return 0;
}