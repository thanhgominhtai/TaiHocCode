//quick sort co 2 loai LOMUTO & HOARE
//O(NlogN)
#include <stdio.h>
//LOMUTO  
//ham phan hoach lomuto : tra ve chi so cua khoa (pivot)
int partition(int a[], int l, int r)
{
	int i = l - 1, pivot = a[r];
	for(int j = l; j < r; j++)
	{
		//neu a[j] > pivot : bo qua
		if(a[j] <= pivot)
		{
			++i;
			int tmp = a[i]; a[i] = a[j]; a[j] = tmp;
		}
	}
	++i;
	int tmp = a[i]; a[i] = a[r]; a[r] = tmp;
	return i;// tra ve vi tri mid
}
void quicksort(int a[], int l, int r)
{
	if(l < r)
	{
		int pos = partition(a, l, r);
		//xet de qy ve day ben trai
		quicksort(a, l, pos - 1);
		quicksort(a, pos + 1, r);
	}
}
// -----------------------.----------------------.------------------
#include <stdlib.h>
//-1 : neu a va b da dung thu tu mong muon => -1
//1 : neu a va b ko dung thu tu mong muon => 1
int compare(const void *a, const void *b)// ham phai tra ve kieu int
{//ep 2 contro void ve con tro int
	int *x = (int*)a;
	int *y = (int*)b;
//	if(*x < *y)
//	{
//		return -1;
//	}else return 1;
	return *x - *y;
}
int main(){
	int n;
	scanf("%d", &n);
	int a[n], b[n];
	for(int i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
	}
	for(int i = 0; i < n; i++)
	{
		b[i] = a[i];
	}
	quicksort(a, 0, n - 1);
	qsort(b, n,sizeof(int), compare);//ham thu vien qsort()
	for(int i = 0; i < n; i++)
	{
		printf("%d ", a[i]);
	}
	printf("\n");
	for(int i = 0; i < n; i++)
	{
		printf("%d ", b[i]);
	}
}