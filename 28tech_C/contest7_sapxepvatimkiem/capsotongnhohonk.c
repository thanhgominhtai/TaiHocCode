/*
[Sắp xếp - Tìm
Kiếm]. Bài 18. Cặp số
có tổng nhỏ hơn K
Cho mảng a gồm n phần tử và số nguyên dương k. Đếm số lượng cặp số ai, aj (i != j) có tổng nhỏ hơn k

Input Format
Dòng thứ 1 là số lượng phần tử trong mảng và số nguyên dương k; Dòng thứ 2 là n phần tử trong mảng
Constraints
2<=n<=10^6; 1<=k<=10^6; 0<=a[i]<=10^6;
Output Format
In ra số lượng cặp số có tổng nhỏ hơn k

Sample Input 0
4 5
2 2 2 2
Sample Output 0
6
*/
#include <stdio.h>
#include <stdlib.h>
int sort(const void *a, const void *b)
{
	int *x = (int*)a;
	int *y = (int*)b;
	return *x - *y;
}
int find(int a[], int l, int  r, int x)
{
	int res = -1;
	while(l <= r)
	{
		int m = (l + r)/2;
		if(a[m]<x)
		{
			res = m;
			l = m + 1;
		} 
		else r = m - 1;
	}
	return res;
}
int main()
{
	int n, k; scanf("%d%d", &n, &k);
	int a[n];
	for(int i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
	}
	qsort(a, n, sizeof(int), sort);
	long long ans = 0;
	for(int i = 0; i < n; i++)
	{
		int l = i + 1, r = n -1;
		int pos = find(a, l, r, k - a[i]);
		if(pos != -1)
		{
			ans += pos - i;
		}
	}
	printf("%lld", ans);
}