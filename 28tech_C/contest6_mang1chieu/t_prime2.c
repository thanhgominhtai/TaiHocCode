/*
[Hàm, Lý Thuyết Số].
Bài 9. T-prime2
Cho số tự nhiên N. Nhiệm vụ của bạn là hãy đếm tất cả các số có đúng ba ước số không vượt quá n. Ví
dụ n=100, ta có các số 4.

Input Format
Số nguyên dương N
Constraints
1≤N≤10^12
Output Format
Đưa ra kết quả mỗi theo từng dòng.

Sample Input 0
838000000000
Sample Output 0
72397
*/
#include <stdio.h>
#include <math.h>
int nt[1000001];
void sangnt()
{
	for(int i = 0; i < 1000001; i++)
	{
		nt[i] = 1;
	}
	nt[0] = nt[1] = 0;
	for(int i = 2; i < sqrt(1000001); i++)
	{
		if(nt[i])
		{
			for(int j = i * i; j < 1000001; j +=i)
			{
				nt[j] = 0;
			}
		}
	}
}
int main()
{
	sangnt();
	long long n;
	scanf("%lld", &n);
	int dem = 0;
	for(long long i = 2; i <= sqrt(n); i++)
	{
		long long binhphuong = i * i, can = sqrt(binhphuong);
		if(nt[i] && binhphuong == can * can)
		{
			++dem;
		}
	}
	printf("%d", dem);
}