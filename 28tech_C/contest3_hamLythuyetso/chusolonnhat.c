/*
[Hàm, Lý Thuyết Số].
Bài 30. Chữ số cuối
cùng lớn nhất
Viết chương trình cho phép nhập vào n và liệt kê các số nguyên tố thỏa mãn nhỏ hơn hoặc bằng n và có
chữ số cuối cùng lớn nhất. Có bao nhiêu số như vậy?


	Input Format
	Số nguyên dương n
	Constraints
	1≤n≤10^7
	Output Format
	Dòng đầu tiên liệt kê các số thỏa mãn, và dòng thứ 2 in ra số lượng số thỏa mãn.
	
Sample Input 0
200
Sample Output 0
2 3 5 7 11 13 17 19 23 29 37 47 59 67 79 89 101 103 107 109 113 127 137 139 149 157 167 179 199
29
*/
#include <stdio.h>
#include <math.h>
int nt(int n)
{
	if(n < 2)
		return 0;
	for(int i = 2; i <= sqrt(n); i++)
	{
		if(n % i == 0)
			return 0;
	}
	return 1;
}

int check(int n)
{
	int r = n % 10;
	while(n)
	{
		if(n % 10 > r)
			return 0;
		n /= 10;
	}
	return 1;
}
int main()
{
	int n;
	scanf("%d", &n);
	int dem = 0;
	for(int i = 1; i <= n; i++)
	{
		if(check(i) && nt(i))
		{
			printf("%d ", i);
			++dem;
		}
	}
	printf("\n%d", dem);
	return 0;
}