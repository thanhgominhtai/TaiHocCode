/*
[Mảng 1 Chiều]. Bài
16. Định lý Pytago
Theo định lý Pytago, ta đã biết một bộ 3 số (a, b, c) thỏa mãn a^2 + b^2 = c^2 thì đó là ba cạnh của
một tam giác vuông. Cho dãy số A[] gồm có N phần tử. Nhiệm vụ của bạn là kiểm tra xem có tồn tại bộ
ba số thỏa mãn là ba cạnh của tam giác vuông hay không.

Input Format
Dòng đầu tiên là số nguyên N Dòng tiếp theo gồm N số nguyên A[i]
Constraints
1≤ N ≤ 5000; 1 ≤ A[i] ≤ 10^9
Output Format
In YES nếu trong mảng tồn tại 3 cặp thỏa mãn bộ 3 Pytago, ngược lại in NO.

Sample Input 0
3
3 4 5
Sample Output 0
YES
*/
#include <stdio.h>
int partition(long long a[], int l, int r)
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
void quicksort(long long a[], int l, int r)
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
	long long a[n];
	for(int i = 0; i < n; i++)
	{
		scanf("%lld", &a[i]);
		a[i] *= a[i];
	}
	quicksort(a, 0, n - 1);
	for(int i = n - 1; i >= 2; i--)
	{
		int l = 0, r = i - 1;
		while(l < r)
		{
			long long sum = a[l] + a[r];
			if(sum == a[i])
			{
				printf("yes\n");
				return 0;
			}
			else if(sum < a[i])
			{
				++l;
			}
			else{
				++r;
			}
		}
	}
	printf("no");
	return 0;
}