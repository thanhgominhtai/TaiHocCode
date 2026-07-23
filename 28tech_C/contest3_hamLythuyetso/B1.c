/*
[Hàm, Lý Thuyết Số].
Bài 1. Kiểm Tra Số
Nguyên Tố
Kiểm tra một số nguyên không âm N có phải là số nguyên tố hay không?

	Input Format
	Dòng duy nhất chứa số nguyên dương N
	Constraints
	0≤N≤10^9
	Output Format
	In ra YES nếu n là số nguyên tố, ngược lại in NO.
	
Sample Input 0
999999999
Sample Output 0
NO
Sample Input 1
17
Sample Output 1
YES
*/
#include <stdio.h>
#include <math.h>
int gt(int n)
{
	if(n < 2)
		return 0;
	else
		for(int i = 2; i <= sqrt(n); i++)
		{
			if(n % i == 0)
				return 0;
		}
	return 1;
}
int main()
{
	long long n;
	scanf("%lld", &n);
	if(gt(n))
	{
		printf("yes");
	}else printf("no");
	return 0;
}