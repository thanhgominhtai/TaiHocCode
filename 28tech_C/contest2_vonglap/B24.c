/*
[Vòng lặp]. Bài 24. Ước chung lớn nhất
của giai thừa
Cho 2 số a và b. Nhiệm vụ của bạn là tính ước chung lớn nhất của a giai thừa và b giai thừa

		Input Format
		2 số nguyên không âm a và b.
		Constraints
		0<=a,b<=10^12; 0<=min(a, b)<=12
		Output Format
		In ra kết quả trên 1 dòn
		
Sample Input 0
2 5
Sample Output 0
2
Explanation 0
2! = 2; 5! = 120. Ước chung lớn nhất của 2 và 120 là 2.
*/
#include <stdio.h>
#include <math.h>
int main()
{
	int a, b;
	scanf("%d%d", &a, &b);\
	int min = fmin(a, b);
	long long gt = 1;
	for(int i = 1; i <= min; i++)
	{
		gt *= i;
	}
	printf("%lld", gt);
}