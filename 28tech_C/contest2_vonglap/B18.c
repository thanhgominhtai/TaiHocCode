/*
[Vòng lặp]. Bài 18. Đếm chữ số nguyên
tố của số nguyên
Nhập vào n nguyên. Đếm số lượng chữ số của n là số nguyên tố.

	Input Format
	Số nguyên không âm n
	Constraints
	0≤n≤10^18
	Output Format
	Kết quả của bài toán
	
Sample Input 0
1222333999888
Sample Output 0
6
*/
#include <stdio.h>
#include <math.h>
int main()
{
	long long n;
	scanf("%lld", &n);
	int s, cnt = 0;
	while(n)
	{
		s = n % 10;
		if(s == 2 || s == 3 || s == 5 || s == 7)
		{
			cnt++;
		}
		n /= 10;
	}
	printf("%d", cnt);
	return 0;
}