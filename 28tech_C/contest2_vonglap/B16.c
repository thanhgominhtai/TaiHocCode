/*
[Vòng lặp]. Bài 16. Đếm số lượng chữ số
của N
Nhập vào n, đếm số lượng chữ số của n và in ra kết quả.

		Input Format
		Số nguyên không âm n
		Constraints
		0≤n≤10^18
		Output Format
		Số lượng chữ số của n
		
Sample Input 0
123456789
Sample Output 0
9
*/
#include <stdio.h>
int main()
{
	int n;
	scanf("%d", &n);
	int s;
	while(n)
	{
		n/= 10;
		s++;
	}
	printf("%d", s);
	return 0;
}