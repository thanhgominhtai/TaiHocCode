/*
 Quy]. Bài 19. Kiểm tra chữ số chẵn.
Cho số nguyên không âm N, hãy kiểm tra xem tất cả các chữ số của N có phải đều là số chẵn hay không?

Input Format
Số nguyên không âm N.
Constraints
0≤n≤10^18
Output Format
In ra YES nếu n toàn chữ số chẵn, ngược lại in ra NO.

Sample Input 0
2280820
Sample Output 0
YES
*/
#include <stdio.h>
int chan(long long n)
{
	if(n < 10)
		if(n % 2 == 0)
			return 1;
		else return 0;
	else
		if(n % 10 % 2 != 0)
			return 0;
		else chan(n / 10);
}
int main()
{
	long long n;
	scanf("%lld", &n);
	if(chan(n)) printf("yes");
	else printf("no");
	return 0;
}