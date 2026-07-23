/*
Bài 3: Viết chương trình nhập vào 1 chuỗi gồm các ký tự a -> z, A -> Z và có thể chứa khoảng trắng. Hãy viết hoa các chữ cái ở đầu mỗi từ, các chữ cái còn lại để ở dạng viết thường.
Ví dụ:

Nhap chuoi: f8 fulLsTack
Ket qua: F8 Fullstack
*/
#include <iostream>
using namespace std;
int main()
{
	string str;
	getline(cin, str);
	for(int i = 0; i < str.length(); i++)
	{
		if(str[i] >= 65 && str[i] <= 90)
		{
			str[i] = tolower(str[i]);
		}
	}
	for(int i = 0; i < str.length(); i++)
	{
		if(i == 0)
		{
			str[i] = toupper(str[i]);
		}else if(str[i - 1] == ' ')
		{
			str[i] = toupper(str[i]);
		}
	}
	cout << str;
	return 0;
}