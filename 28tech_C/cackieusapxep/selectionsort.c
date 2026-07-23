//selection sort
// tang dan
//O(N^2)
//moi buoc dua phan tu nho nhat ve dau day
#include <stdio.h>
void func(int a[], int n)
{
	for(int i = 0; i < n - 1; i++)
	{	//di tiem phan tu nho nhat chua duoc xap xep
		int min = i;// ban dau coi i la nho nhat
		for(int j = i + 1; j < n; j++)
		{
			
			if(a[j] < a[min])
			{
				min = j;
			}
		}
		//swap
		int tmp = a[i];
		a[i] = a[min];
		a[min] = tmp;
	}
}
int main()
{
	int n;
	scanf("%d", &n);
	int a[n];
	for(int i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
	}
	func(a, n);
	for(int i = 0; i < n; i++)
	{
		printf("%d ", a[i]);
	}
}