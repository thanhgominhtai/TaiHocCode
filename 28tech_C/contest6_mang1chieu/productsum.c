/*
[Mảng 1 Chiều]. Bài
28. Product sum
Cho mảng A[] gồm N phần tử.Nhiệm vụ của bạn là tìm giá trị lớn nhất của tổng bên dưới bằng cách sắp
đặt lại các phần tử trong mảng. Chú ý, kết quả của bài toán có thể rất lớn vì vậy bạn hãy đưa ra kết quả
lấy modulo với 10^9+7.			    n-1
							max = Σ		  Ai * i
								    i=0
Input Format
Dòng đầu tiên là số nguyên N. Dòng tiếp theo gồm N số nguyên A[i]
Constraints
1≤ N ≤ 10^5; 0 ≤ A[i] ≤ 10^7
Output Format
In ra kết quả của bài toán lấy dư với (10^9 + 7)

Sample Input 0
5
5 3 2 4 1
Sample Output 0
40
*/
#include <stdio.h>
#include <math.h>
#define ll long long
int partition(int a[], int l, int r)
{
	int i = l - 1, pivot = a[r];
	for(int j = l; j < r; j++)
	{
		if(a[j] <= pivot)
		{
			++i;
			int tmp = a[i]; a[i] = a[j]; a[j] = tmp;
		}
	}
	++i;
	int tmp = a[i]; a[i] = a[r]; a[r] = tmp;
	return i;
}
void quicksort(int a[], int l, int r)
{
	if(l < r)
	{
		int pos = partition(a, l, r);
		quicksort(a, l, pos - 1);
		quicksort(a, pos + 1, r);
	}
}
int main()
{
	int n; scanf("%d", &n);
	int a[n];
	long long sum = 0;
	for(int i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
	}
	quicksort(a, 0, n - 1);
	for(int i = 0; i < n; i++)
	{
		sum += 1ll * a[i] * i;
		sum %= 1000000007;
	}
	printf("%lld", sum);
	return 0;
}