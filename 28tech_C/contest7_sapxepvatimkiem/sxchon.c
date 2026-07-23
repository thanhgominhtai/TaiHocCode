/*
[Sắp xếp - Tìm
Kiếm]. Bài 6. Sắp xếp
chọn
Cho mảng số nguyên A[] có N phần tử, hãy in ra các bước của thuật toán sắp xếp chọn.

Input Format
Dòng đầu tiên là số nguyên dương N. Dòng thứ 2 là N phần tử trong mảng, các phần tử viết cách nhau
một dấu cách.
Constraints
1<=N<=10^3; 0<=A[i]<=10^9
Output Format
In ra các bước của thuật toán sắp xếp chọn

Sample Input 0
4
5 7 3 2
Sample Output 0
Buoc 1: 2 7 3 5
Buoc 2: 2 3 7 5
Buoc 3: 2 3 5 7
*/
#include <stdio.h>
#include <math.h>
void sort(int a[], int n)
{
	for(int i = 0; i < n - 1; i++)
	{
		int min = i;
		for(int j = i + 1; j < n; j++)
		{
			if(a[j] < a[min])
			{
				min = j;
			}
		}
		int tmp = a[i];
		a[i] = a[min];
		a[min] = tmp;
		for(int k = 0; k < n; k++)
		{
			printf("%d ", a[k]);
		}
		printf("\n");
	}
}
int main()
{
	int n; scanf("%d", &n);
	int a[n];
	for(int i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
	}
	sort(a, n);
}