//bubble sort
// tang dan
//O(N^2)
//moi buoc dau phan tu lon nhat cgua xap xep ve cuoi
#include <stdio.h>
void func(int a[], int n)
{
	for(int i = 0; i < n - 1; i++)
	{	
		for(int j = 0; j < n - i - 1; j++)
		{	//so sanh hai gia tri canh nhau
			if(a[j + 1] < a[j])
			{
				int tmp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = tmp;
			}
		}
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
	return 0;
}