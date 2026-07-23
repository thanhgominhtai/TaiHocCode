/*
[Mảng 1 Chiều]. Bài
23. Trộn 2 dãy và sắp
xếp
Cho hai dãy số nguyên dương A và B. Hãy trộn hai dãy với nhau sao cho dãy A được đưa vào các vị trí có
chỉ số chẵn, dãy B được đưa vào các vị trí có chỉ số lẻ. Đồng thời, dãy A được sắp xếp tăng dần, còn dãy
B được sắp xếp giảm dần. (Chú ý: chỉ số tính từ 0)

nput Format
Dòng đầu tiên ghi số n là số lượng phần tử của 2 dãy. Dòng tiếp theo ghi n số nguyên dương của dãy A.
Dòng tiếp theo ghi n số nguyên dương của dãy B.
Constraints
1≤n≤10^5; 1≤ai,bi≤10^9
Output Format
In ra kết quả theo yêu cầu của bài toán

Sample Input 0
4
4 2 7 1
5 6 2 8
Sample Output 0
1 8 2 6 4 5 7 2
*/
#include <stdio.h>
#include <math.h>
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
	int a[n], b[n];
	for(int i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
	}
	for(int i = 0; i < n; i++)
	{
		scanf("%d", &b[i]);
	}
	quicksort(a, 0, n - 1);
	quicksort(b, 0, n - 1);
	int j = n - 1;
	for(int i = 0; i < n; i++)
	{
		printf("%d %d ", a[i], b[j--]);
	}
}