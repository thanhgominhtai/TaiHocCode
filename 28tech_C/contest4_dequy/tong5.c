/*
[Đệ Quy]. Bài 10.
Tính tổng 5
Tính tổng S(n) = 1/1 + 1/2 + 1/3 + ... + 1/n bằng đệ quy.

nput Format
Số nguyên dương n.
Constraints
1≤n≤1000;
Output Format
In ra S(n) lấy 3 số sau dấu phẩy.

Sample Input 0
18
Sample Output 0
3.495
*/
#include <stdio.h>
double tong(int n)
{
	if(n == 0)
		return 0;
	else
		return 1.0 / n + tong(n - 1);
}
int main()
{
	int n;
	scanf("%d", &n);
	printf("%.3lf", tong(n));
}