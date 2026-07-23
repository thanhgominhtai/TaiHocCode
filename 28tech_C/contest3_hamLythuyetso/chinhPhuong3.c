/*
[Hàm, Lý Thuyết Số].
Bài 22. Số Chính
Phương 3
Đếm số lượng các số chính phương trong đoạn từ a tới b

	Input Format
	2 số nguyên dương a, b
	Constraints
	1≤a≤b≤10^18
	Output Format
	Số lượng số chính phương trong đoạn [a, b]
	
Sample Input 0
1 1000000000
Sample Output 0
31622
*/
#include <stdio.h>
#include <math.h>
int cp(long long a, long long b)
{
	int cnt = 0;
	for(float i = sqrt(a); i <= sqrt(b); i++)
	{
		int s = i;
		if(s < sqrt(a)) 
			continue;
		else if(s * s == 1ll * i * i)
			++cnt;
	}
	return cnt;
}
int main()
{
	long long a, b;
	scanf("%lld%lld", &a, &b);
	printf("%d", cp(a, b));
	return 0;
}