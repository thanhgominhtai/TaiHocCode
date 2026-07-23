/*
[Hàm, Lý Thuyết Số].
Bài 29. Số thuận
nghịch, lộc phát
Một số được coi là số đẹp nếu nó là số thuận nghịch, có chứa ít nhất một chữ số 6, và tổng các chữ số
của nó có chữ số cuối cùng là 8. Viết chương trình liệt kê các số đẹp trong đoạn giữa 2 số nguyên cho
trước, các số cách nhau một dấu cách.

	Input Format
	2 số nguyên a, b
	Constraints
	1≤a≤b≤10^6
	Output Format
	Liệt kê các số đẹp trong đoạn, các số viết cách nhau một khoảng trống
	
Sample Input 0
1 400
Sample Output 0
161
*/
#include <stdio.h>
int tn(int n)
{
	int lat = 0, tmp = n;
	while(n)
	{
		int s = n % 10;
		lat = lat * 10 + s;
		n /= 10;
	}
	if(lat == tmp)
		return 1;
	else return 0;
}
int check6(int n)
{
	while(n)
	{
		int s = n % 10;
		if(s == 6)
			return 1;
		n /= 10;
	}
	return 0;
}
int tong(int n)
{
	int sum = 0;
	while(n)
	{
		int s = n % 10;
		sum += s;
		n /= 10;
	}
	if(sum % 10 == 8)
		return 1;
	else return 0;
}
int main()
{
	int a, b;
	scanf("%d%d", &a, &b);
	for(int i = a; i <= b; i++)
	{
		if(tn(i) && check6(i) && tong(i))
			printf("%d", i);
	}
	return 0;
}