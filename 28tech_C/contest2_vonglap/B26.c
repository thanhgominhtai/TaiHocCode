/*
[Vòng lặp]. Bài 26. Giải phương trình
Cho 3 số a, b, n. Nhiệm vụ của bạn là xác định xem phương trình ax + by = n có tồn tại cặp nghiệm (x,
y) nguyên không âm hay không?

	Input Format
	1 dòng duy nhất chứa 3 số a, b, n
	Constraints
	1<=a,b,n<=1000
	Output Format
	In ra YES nếu tồn tại cặp nghiệm nguyên không âm, ngược lại in ra NO.

Sample Input 0
7 10 16
Sample Output 0
NO
Sample Input 1
5 8 28
Sample Output 1
YES
*/
#include <stdio.h>
int main()
{
	int a, b, n;
	scanf("%d%d%d", &a, &b, &n);
	for(int i = 0; i <= n / a; i++)
	{
		int tmp = n - a * i;
		if(tmp % b == 0)
		{
			printf("yes\n");
			return 0;
		}
	}
	printf("no");
}