/*
[Vòng lặp]. Bài 12.
Tổng bội 2
Nhập vào n nguyên dương không quá 10^6, tính và in tổng sau ra màn hình S=2+4+6+8+.....+2*n

		Input Format
		Số nguyên dương n
		Constraints
		1≤n≤10^6
		Output Format
		Kết quả của bài toán

Sample Input 0
4
Sample Output 0
20
*/
#include <stdio.h>
int main()
{
	int n;
	scanf("%d", &n);
	long long sum = 0;
	for(int i = 1; i <=n; i++)
	{
		sum += i * 2;
	}
	printf("%lld", sum);
	return 0;
}