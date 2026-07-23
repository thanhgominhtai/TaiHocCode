/*
Bài 2: Viết chương trình nhập vào 1 chuỗi gồm các ký tự a -> z và có thể chứa khoảng trắng. Hãy loại bỏ các khoảng trắng thừa ở giữa các từ.
Ví dụ:

Nhap chuoi: f8   fullstack
Ket qua: f8 fullstack
*/
#include <iostream>
using namespace std;
int main()
{
	string str;
	getline(cin, str);
	int dem = 0;
	while(dem < str.length())
	{
		if(str[dem] == ' ' && str[dem + 1] == ' ')
		{
			str.erase(dem, 1);
		}else ++dem;
	}
	cout << str;
	return 0;
}