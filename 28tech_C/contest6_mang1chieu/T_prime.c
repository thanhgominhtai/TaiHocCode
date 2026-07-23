/*
[Hàm, Lý Thuyết Số].
Bài 8. T-prime
Cho số tự nhiên N. Nhiệm vụ của bạn là hãy liệt kê tất cả các số có đúng ba ước số không vượt quá n. Ví
dụ n=100, ta có các số 4, 9, 25, 49.

Input Format
Số nguyên dương N
Constraints
1≤N≤10^12
Output Format
Đưa ra kết quả trên một dòng

Sample Input 0
100
Sample Output 0
4 9 25 49
*/
#include <stdio.h>
#include <math.h>
int nt[1000001];
void sangnt()
{
	for(int i = 0; i <= 1000000; i++)
	{
		nt[i] = 1;
	}
	nt[0] = nt[1] = 0;
	for(int i = 2; i <= sqrt(1000000); i++)
	{
		if(nt[i])
		{
			for(int j = i * i; j <= 1000000; j +=i)
			{
				nt[j] = 0;
			}
		}
	}
}
int main()
{
	sangnt();
	int n;
	scanf("%d", &n);
	for(int i = 2; i <= sqrt(n); i++)
	{
		long long binhphuong = i * i; float can = sqrt(binhphuong);
		if(nt[i] && binhphuong == can * can)
		{
			printf("%lld ", binhphuong);
		}
	}
}