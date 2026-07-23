/*
[Vòng lặp]. Bài 25.
Thương giai thừa
Cho số nguyên dương N, bạn hãy tính tổng : S(N) = 1/0! + 1/1! + 1/2! + 1/3! +... + 1/(N - 1)!. Trong
đó ! là kí hiệu của giai thừa

	Input Format
	Dòng duy nhất chứa số nguyên dương N
	Constraints
	2<=N<=15
	Output Format
	In ra kết quả lấy độ chính xác 4 số đằng sau dấu thập phân
	
Sample Input 0
4
Sample Output 0
2.6667
*/
#include <stdio.h>
int main()
{
	int n;
	scanf("%d", &n);
	long long gt = 1;
	double kq = 0;
	for(int i = 1; i <= n; i++)
	{
		kq += 1.0 / gt;
		gt *= i;
	}
	printf("%.4lf", kq);
}