/*
Bài 5: Viết chương trình giải phương trình bậc nhất một ẩn ax + b = 0, trong đó a và b là các hệ số nhập từ bàn phím.
Gợi ý:

Nếu a = 0 và b = 0 thì phương trình có vô số nghiệm.
Nếu a = 0 và b != 0 thì phương trình vô nghiệm.
Nếu a != 0 thì phương trình có nghiệm duy nhất x = -b / a.
Ví dụ:

a = 1
b = 2
Nghiem cua phuong trinh la -2
*/
#include <iostream>
using namespace std;
int main()
{
	int a, b;
	cin >> a >> b;
	if(a == 0 && b == 0)
	{
		cout << "pt vo so nghiem";
	}else if(a == 0 && b != 0)
	{
		cout << "pt vo nghiem";
	}else if(a != 0)
	{
		cout << "pt co nghiem la: " << 1.0 * -b / a;
	}
	return 0;
}