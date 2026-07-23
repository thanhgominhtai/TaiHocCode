/*
[Vòng Lặp]. Bài 7.
Liệt kê ước
Đếm số lượng ước và liệt kê các ước theo thứ tự tăng dần của số nguyên dương N
Input Format
Số nguyên dương N không quá

	Constraints
	1≤N≤10^6
	Output Format
	Kết quả của bài toán
	
Sample Input 0
28
Sample Output 0
6
1 2 4 7 14 28
*/
#include <stdio.h>
int main()
{
	int n;
	scanf("%d", &n);
	int sum = 0;
	for(int i = 1; i <= n; i++)
	{
		if(n % i == 0)
			{
				printf("%d\t", i);
				sum += 1;
			}
	}
	printf("\n%d", sum);
	return 0;
}