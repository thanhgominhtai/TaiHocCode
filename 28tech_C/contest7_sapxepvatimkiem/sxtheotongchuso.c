/*
[Sắp xếp - Tìm
Kiếm]. Bài 3. Sắp xếp
theo tổng chữ số
Cho mảng số nguyên A[] có N phần tử, hãy sắp xếp các phần tử trong mảng theo thứ tự tổng chữ số
tăng dần, nếu 2 số có cùng tổng chữ số, thì số nào nhỏ hơn sẽ được in trước.

Input Format
Dòng đầu tiên là số nguyên dương N. Dòng thứ 2 là N phần tử trong mảng, các phần tử viết cách nhau
một dấu cách.
Constraints
1<=N<=10^5; 0<=A[i]<=10^9
Output Format
In ra các phần tử trong mảng sau khi sắp xếp

Sample Input 0
5
999976710 999982875 999974431 999984407 999972533 
Sample Output 0
999974431 999972533 999976710 999984407 999982875 
*/
#include <stdio.h>
#include <stdlib.h>
int tong(long long x)
{
	int sum = 0;
	while(x)
	{
		sum += x % 10;
		x = x / 10;
	}
	return sum;
}
int cmp(const void *a, const void *b)
{
	long long *x = (long long*)a;
	long long *y = (long long*)b;
	return tong(*x) - tong(*y);
}
int main()
{
	int n; scanf("%d", &n);
	long long a[n];
	for(int i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
	}
	qsort(a, n, sizeof(long long), cmp);
	for(int i = 0; i < n; i++)
	{
		printf("%d ", a[i]);
	}
}