/*
[Mảng 1 chiều cơ
bản]. Bài 18. Liền kề
trái dấu
Cho mảng số nguyên A[] gồm N phần tử, hãy liệt kê theo thứ tự xuất hiện các số thỏa mãn có ít nhất 1
số trái dấu với nó đứng cạnh nó.

Input Format
Dòng đầu tiên là N : số lượng phần tử trong mảng; Dòng thứ 2 gồm N phần tử viết cách nhau một
khoảng trống.
Constraints
2<=N<=10^6; -10^6<=A[i]<=10^6
Output Format
In ra kết quả của bài toán

Sample Input 0
9
-992414 993205 998602 990785 -993397 990527 995429 991288 -992221 
Sample Output 0
-992414 993205 990785 -993397 990527 991288 -992221 
*/
#include <stdio.h>
int main()
{
	int n;
	scanf("%d", &n);
	long long a[n];
	for(int i = 0; i < n; i++)
	{
		scanf("%lld", &a[i]);
	}
	for(int i = 0; i < n; i++)
	{
		if(i == 0)
		{
			if(a[0] * a[1] < 0) printf("%lld ", a[0]);
		}
		else if(i == n - 1)
		{
			if(a[n - 1] * a[n - 2] < 0) printf("%lld ", a[n - 1]);
		}
		else
		{
			if(a[i] * a[i - 1] < 0 || a[i] * a[i + 1] < 0) printf("%lld ", a[i]);
		}
	}
	return 0;
}