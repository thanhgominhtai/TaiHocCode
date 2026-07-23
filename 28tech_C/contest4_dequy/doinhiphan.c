/*
[Đệ Quy]. Bài 11.
Chuyển hệ thập phân
sang hệ nhị phân
Cho một số nguyên không âm N, hãy in ra dạng biểu diễn nhị phân của số N.

Input Format
Số nguyên không âm N
Constraints
0≤n≤10^18
Output Format
Biểu diễn nhị phân của số nguyên N.

Sample Input 0
8
Sample Output 0
1000
*/
#include <stdio.h>
void np(int n)
{
	if(n == 0)
		return;
	else 
		np(n / 2);
		printf("%d", n % 2);
}
int main()
{
	int n;
	scanf("%d", &n);
	np(n);
}