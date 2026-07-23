/*
[Đệ Quy]. Bài 1. Tính
tổng 1.
Tính tổng hàm S(n) = 1 + 2 + 3 + 4 + .. + n bằng đệ quy. Nếu bạn chưa biết thì S(n) có thể tính nhanh
bằng công thức S(n) = n * (n + 1) / 2

Input Format
Số nguyên dương n.
Constraints
0≤n≤1000; Chú ý các bạn phải code bằng đệ quy nhé.
Output Format
In ra S(n).

Sample Input 0
773
Sample Output 0
299151
*/
#include <stdio.h>
int sum(int n)
{
	if(n == 0)
		return 0;
	else return n + sum(n - 1);
}
int main()
{
	int n;
	scanf("%d", &n);
	printf("%d", sum(n));
	return 0;
}