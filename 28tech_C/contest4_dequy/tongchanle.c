/*
[Đệ Quy]. Bài 18.
Tính tổng chữ số chẵn lẻ.
Cho số nguyên không âm N, hãy tính tổng các chữ số chẵn, tổng các chữ số lẻ của N.

Input Format
Số nguyên không âm N.
Constraints
0≤n≤10^18
Output Format
Dòng đầu tiên in ra tổng các chữ số chẵn. Dòng thứ 2 in ra tổng các chữ số lẻ.

Sample Input 0
123456
Sample Output 0
12
9
*/
#include <stdio.h>
#include <math.h>
int chan(long long n)
{
	if(n < 10)
		if(n % 2 == 0)
			return n;
		else 
			return 0;
	else
		if(n % 10 % 2 == 0)
			return n % 10 + chan(n / 10);
		else return chan(n / 10);
		
}
int le(long long n)
{
	if(n < 10)
		if(n % 2 != 0)
			return n;
		else
			return 0;
	else 
		if(n % 10 % 2 != 0)
			return n % 10 + le(n / 10);
		else return le(n / 10);
}
int main()
{
	long long n;
	scanf("%lld", &n);
	printf("%d\n", chan(n));
	printf("%d", le(n));
	return 0;
}