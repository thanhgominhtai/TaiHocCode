/*
[Vòng lặp]. Bài 17.
Tính tổng chữ số của
N
Nhập vào n, tính tổng các chữ số của n, và in ra kết quả

	Input Format
	Số nguyên không âm n
	Constraints
	0≤n≤10^18
	Output Format
	Tổng chữ số của n
	
Sample Input 0
12341
Sample Output 0
11
*/
#include <stdio.h>
int main()
{
	int n;
	scanf("%d", &n);
	int s;
	while(n)
	{
		int tmp;
		tmp = n % 10;
		n /= 10;
		s += tmp;
	}
	printf("%d", s);
	return 0;
}