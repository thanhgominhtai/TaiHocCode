/*
[Mảng 1 chiều cơ
bản]. Bài 30. Mảng
đánh dấu 5
Cho mảng số nguyên A[] gồm N phần tử, hãy tìm giá trị có số lần xuất hiện nhiều nhất trong mảng, nếu
có nhiều giá trị có cùng số lần xuất hiện thì lấy giá trị xuất hiện trước theo thứ tự trong mảng

Input Format
Dòng đầu tiên là số nguyên dương N; Dòng thứ 2 gồm N số nguyên viết cách nhau một vài khoảng trắng
Constraints
1<=N<=1000; 0<=A[i]<=10^6;
Output Format
In ra giá trị có số lần xuất hiện nhiều nhất kèm theo tần suất của nó

Sample Input 0
6
7 2 0 3 9 5 
Sample Output 0
7 1
Sample Input 1
4
1 2 2 1
Sample Output 1
1 2
*/
#include <stdio.h>
int mark[1001];
int main()
{
	int n;
	scanf("%d", &n);
	int a[n];
	int max = -1e9;
	for(int i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
		mark[a[i]]++;
		if(max < a[i]) max = a[i];;
	}
	int tansuat = 0, check = 0;
	for(int i = 0; i < n; i++)
	{
		if(mark[a[i]] > tansuat)
		{
			tansuat = mark[a[i]];
			check = a[i];
		}
	}
	printf("%d %d", check, tansuat);
}