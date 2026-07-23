/*
[Mảng 1 chiều cơ
bản]. Bài 7. Cặp số 2
Cho mảng số nguyên A[] gồm N phần tử, hãy tìm độ chênh lệch nhỏ nhất giữa 2 phần tử trong mảng.

Input Format
Dòng đầu tiên là số nguyên dương N; Dòng thứ 2 gồm N số nguyên viết cách nhau một vài khoảng trắng;
Constraints
1<=N<=1000; 0<=A[i], X<=10^3;
Output Format
In ra độ chênh lệch nhỏ nhất giữa 2 phần tử bất kì trong mảng

Sample Input 0
8
69 96 93 27 84 32 78 56 
Sample Output 0
3
*/
#include <stdio.h>
#include <math.h>
int main()
{
	int n;
	scanf("%d", &n);
	int a[n];
	for(int i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
	}
	int chenhlech, tmp = 1e9;
	for(int i = 0; i < n - 1; i++)
	{
		for(int j = i + 1; j < n; j++)
		{
			int max = fmax(a[i], a[j]);
			int min = fmin(a[i], a[j]);
			if(max - min < tmp)
				chenhlech = max - min;
				tmp = chenhlech + 1;
		}
	}
	printf("%d", chenhlech);
	return 0;
}