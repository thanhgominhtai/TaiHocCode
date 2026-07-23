/*
[Đệ Quy]. Bài 8. Ước
chung lớn nhất, bội
chung nhỏ nhất.
Cho 2 số a và b, hãy tính ước chung lớn nhất và bội chung nhỏ nhất của 2 số a và b. Trong đó hàm UCLN
sử dụng đệ quy để tính

Input Format
2 số nguyên dương a và b.
Constraints
1≤a,b≤10^12;
Output Format
In ra UCLN và BCNN của 2 số. Dữ liệu đảm bảo UCLN của 2 số nằm trong khoảng số nguyên 64 bit

Sample Input 0
10 20
Sample Output 0
10 20
*/

#include <stdio.h>
int usc(int a , int b)
{
	if(b == 0)
		return a;
	else 
		return usc(b, a % b);
}
int bc(int a, int b)
{
	
}
int main()
{
	int a, b;
	scanf("%d%d", &a, &b);
	printf("%d", usc(a, b));
	return 0;
}