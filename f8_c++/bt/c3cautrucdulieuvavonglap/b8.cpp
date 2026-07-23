/*
Bài 8: Viết chương trình nhập vào một số n từ bàn phím. Hãy kiểm tra xem n có phải số nguyên tố hay không.
Gợi ý:

Số nguyên tố là số chỉ chia hết cho 1 và chính nó.
Ví dụ:

n = 3
n la so nguyen to
*/
#include <iostream>
using namespace std;
int main()
{
	int n, check = 1;
	cin >> n;
	for(int i = 2; i < n; i++)
	{
		if(n % i == 0)
		{
			check = 0;
			break;
		}
	}
	if(check) cout << "la nguyen to";
	else cout << "ko la nt";
}