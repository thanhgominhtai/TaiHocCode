//counting sort
// tang dan
//O(N + K)
// dem xem moi gia tri xuat hien bao nhieu lan, sau do in tu be den lon
// cac phan tu ko la so am
#include <stdio.h>
#include <math.h>
//doan tu code

//int dem[1001];
//void func(int a[], int n)
//{
//	int max = 0;
//	for(int i = 0; i < n; i++)
//	{
//		if(max < a[i])
//		{
//			max = a[i];
//		}
//		dem[a[i]]++;
//	}
//	for(int i = 0; i <= max; i++)
//	{
//		for(int j = 0; j < dem[i]; j++)
//		{
//			printf("%d ", i);
//		}
//	}
//}
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	int a[n];
//	for(int i = 0; i < n; i++)
//	{
//		scanf("%d", &a[i]);
//	}
//	func(a, n);
//	return 0;
//}

int cnt[1001];
void func(int a[], int n)
{
	int k = -1e9;
	for(int i = 0; i < n; i++)
	{
		k = fmax(k , a[i]);
	}
	for(int i = 0; i < n; i++)
	{
		cnt[a[i]]++;
	}
	for(int i = 0; i <= k; i++)
	{
		for(int j = 0; j < cnt[i]; j++)
		{
			printf("%d ", i);
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
	return 0;
}