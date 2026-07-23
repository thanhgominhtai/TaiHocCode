/*
[Vòng lặp]. Bài 8.
Liệt kê số chính
phương
Liệt kê các số chính phương dương và không vượt quá n
Ví dụ N = 20 => 1, 4, 9, 16
Gợi ý : Duyệt các số tự nhiên i <= căn N, khi đó i * i sẽ là số chính phương và sẽ <= N

	Input Format
	Số nguyên dương n
	Constraints
	1≤n≤10^10.
	Output Format
	Liệt kê các số chính phương không vượt quá n
	
Sample Input 0
50
Sample Output 0
1 4 9 16 25 36 49
*/
#include <stdio.h>
#include <math.h>
int main()
{
	int n;
	scanf("%d", &n);
	long long s;
	for(int i = 1; i <= sqrt(n); i++)
	{
		s = i * i;
		printf("%lld\t", s);
	}
	return 0;
}