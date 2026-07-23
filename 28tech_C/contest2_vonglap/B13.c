/*
[Vòng lặp]. Bài 13.
Tổng lẻ
Nhập vào n nguyên dương không qua 10^6, tính và in tổng sau ra màn hình. S=1+3+5+7+.....+2*n-1

	Input Format
	Số nguyên dương n
	Constraints
	1≤n≤10^6
	Output Format
	Kết quả của bài toán	

Sample Input 0
4
Sample Output 0
16
*/
#include <stdio.h>
int main()
{
	int n;
	scanf("%d", &n);
	long long sum = 0;
	for(int i = 1; i <= n; i++)
	{
		sum += i * 2 - 1;
	}
	printf("%lld", sum);
	return 0;
}