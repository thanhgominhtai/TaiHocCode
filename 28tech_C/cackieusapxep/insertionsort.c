//insertion sort
// tang dan
//O(N^2)
//moi buoc se chen phan tu dang xet vao cac phan tu duoc xap xep truoc do
#include <stdio.h>
void func(int a[], int n)
{
	for(int i = 1; i < n; i++)
	{
		int vitri = i - 1, giatri = a[i];
		while(vitri >= 0 && giatri < a[vitri])
		{
			a[vitri + 1] = a[vitri];
			--vitri;
		}
		//tim duoc thang nho hon la chen ra dang sau
		a[vitri + 1] = giatri;
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