/*
[Hàm, Lý Thuyết Số].
Bài 64. Số Fibonacci
2
Nhập vào một số và kiểm tra xem số vừa nhập có phải là số trong dãy fibonacci hay không? Biết rằng số
fibonacci bắt đầu bằng 0 và 1.

Input Format
Số nguyên không âm n
Constraints
0≤n≤9*10^18
Output Format
In ra YES nếu n là số Fibonacci, ngược lại in NO

Sample Input 0
0
Sample Output 0
YES
Sample Input 1
18636
Sample Output 1
NO
*/
#include <stdio.h>
int fibo(long long n)
{
	long long a = 1, b = 0;
	if(n == 0 || n == 1)
		return 1;
	else
	{
		for(int i = 2; i <= 90; i++)
		{
			long long tmp = a;
			a = a + b;
			b = tmp;
			if(n == a)
				return 1;
		}
	}
	return 0;
}
int main()
{
	long long n;
	scanf("%lld", &n);
	if(fibo(n)) printf("yes");
	else printf("no");
	return 0;
}