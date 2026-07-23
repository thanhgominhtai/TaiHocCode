/*
Bài 5: Viết chương trình nhập vào 1 số nguyên n (2 <= n <= 10). Nhập mảng có n số nguyên. Hãy sắp xếp lại mảng đó theo thứ tự giảm dần và in ra màn hình.
Ví dụ:

n = 4
Nhap mang: 2 3 1 4 
Mang sau khi sap xep: 4 3 2 1
*/
#include <iostream>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int a[10];
	for(int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	for(int i = n - 1; i > 0; i--)
	{
		for(int j = 0; j < i; j++)
		{
			if(a[j] < a[j + 1])
			{
				int swap = a[j];
				a[j] = a[j + 1];
				a[j + 1] = swap;
			}
		}
	}
	
	for(int i = 0; i < n; i++)
	{
		cout << a[i] << " ";
	}
	return 0;
}