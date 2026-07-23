/*
[Hàm, Lý Thuyết Số].
Bài 20. Số Chính
Phương
Kiểm tra một số nguyên có phải là số chính phương hay không? Định nghĩa số chính phương:
https://vi.wikipedia.org/wiki/S%E1%BB%91_ch%C3%ADnh_ph%C6%B0%C6%A1ng

	Input Format
	Một số nguyên dương N
	Constraints
	1≤N≤10^18
	Output Format
	In ra YES nếu N là số chính phương, ngược lại in NO
	
Sample Input 0
169
Sample Output 0
YES
*/
#include <stdio.h>
#include <math.h>
int check(long long n)
{
	int tmp = sqrt(n);
	if(1ll * tmp * tmp == n)
		return 1;
	else
		return 0;
}
int main()
{
	long long n;
	scanf("%lld", &n);
	if(check(n)) printf("yes");
	else printf("no");
}