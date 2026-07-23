/*
ng 1 Chiều]. Bài 7. Sắp xếp chẵn lẻ.
Cho một mảng các số nguyên, sắp xếp các phần tử trong mảng sao cho, các phần tử lẻ đứng trước và
giảm dần, các phần tử chẵn đứng sau và tăng dần. Xem thêm ví dụ để hiểu rõ hơn yêu cầu.\

Input Format
Dòng đầu tiên là số lượng phần tử trong mảng n Dòng thứ 2 là các phần tử ai trong mảng
Constraints
1≤n≤10^6; 1≤ai≤10^9
Output Format
In ra dãy đã được sắp xếp

Sample Input 0
10
1 2 3 9 7 4 8 6 10 5
Sample Output 0
9 7 5 3 1 2 4 6 8 10
*/
#include <stdio.h>
void sx(int a[], int n)
{
	for(int i = 0; i < n; i++)
	{
		int pos = i;
		for(int j = i + 1; j < n; j++)
		{
			if(a[j] < a[pos])
			{
				pos = j;
			}
		}
		int tmp = a[i];
		a[i] = a[pos];
		a[pos] = tmp;
	}
}
int chan[10000], le[10000];
int main()
{
	int n;
	scanf("%d", &n);
	int c = 0, l = 0;
	for(int i = 0; i < n; i++)
	{
		int a;
		scanf("%d", &a);
		if(a % 2 == 0)
		{
			chan[c] = a; ++c;
		}else{
			le[l] = a; ++l;
		}
	}
	sx(chan, c);
	sx(le, l);
	for(int i = l - 1; i >= 0; i--)
	{
		printf("%d ", le[i]);
	}
	for(int i = 0; i < c; i++)
	{
		printf("%d ", chan[i]);
	}
}