/*
[Hàm, Lý Thuyết Số].
Bài 21. Số Chính
Phương trong đoạn
In ra các số chính phương trong đoạn từ a tới b. Bài này bạn nào code bằng java thì có thể bỏ qua vì test
lớn quá Java không chạy xong trong 8s.

	Input Format
	2 số nguyên dương a, b
	Constraints
	1≤a≤b≤10^12
	Output Format
	In ra các số chính phương trong đoạn giữa 2 số a, b trên một dòng. Các số cách nhau một khoảng trắng.
	
Sample Input 0
10 20
Sample Output 0
16
*/
#include <stdio.h>
#include <math.h>
int main()
{
	long long a , b;
	scanf("%lld%lld", &a, &b);
	for(int i = sqrt(a); i <= sqrt(b); i++)
	{
		if(i < sqrt(a)) 
		{
			continue;
		}else
		printf("%lld ", 1ll * i * i);
	}
	return 0;
}