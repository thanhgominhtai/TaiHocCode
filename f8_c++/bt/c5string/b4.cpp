/*
Bài 4: Viết chương trình nhập vào 1 chuỗi gồm các ký tự a -> z, A -> Z và có thể chưa khoảng trắng. Hãy chuẩn hóa chuỗi đó.
Gợi ý:

Loại bỏ khoảng trắng đầu cuối.
Loại bỏ khoảng trắng thừa ở giữa các từ.
Viết hoa chữ cái đầu, các chữ còn lại viết thường.
Ví dụ:

Nhap chuoi:    bUI   duC   LONG 
Ket qua: Bui Duc Long
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
	int dem = 0;
	while(dem < str.length())
	{
		if(str[dem] == ' ' && str[dem + 1] == ' ')
		{
			str.erase(dem, 1);
		}else ++dem;
	}
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