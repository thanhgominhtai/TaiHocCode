/*
[Hàm, Lý Thuyết Số].
Bài 3. Kiểm Tra Số
Nguyên Tố Với Nhiều
Test
Ở bài tập này yêu cầu bạn kiểm tra số nguyên tố với nhiều trường hợp khác nhau.

Input Format
Dòng đầu tiên là số lượng test case T; Mỗi test case là một số nguyên n
Constraints
1≤T≤1000; 0≤n≤10^6
Output Format
In ra kết quả mỗi test case trên một dòng. In YES nếu n là số nguyên tố, ngược lại in NO.

Sample Input 0
20
364
12401
4152
4624
12783
1868
14521
24213
4740
19037
6992
9390
8929
27797
18685
13291
11424
10292
3534
30641
Sample Output 0
NO
YES
NO
NO
NO
NO
NO
NO
NO
YES
NO
NO
YES
NO
NO
YES
NO
NO
NO
NO
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
			for(int j = i * i; j <= 1000000; j += i)
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
	while(n--)
	{
		int a;
		scanf("%d", &a);
		if(nt[a]) printf("yes\n");
		else printf("no\n");
	}
}