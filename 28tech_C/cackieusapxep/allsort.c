#include <stdio.h>
#include <math.h>
void sortbb(int arr[])// buble sort
{
	for(int i = 0; i < 10; i++)
	{
		for(int j = 0; j < 10 - i; j++)
		{
			if(arr[j + 1] < arr[j])
			{
				int tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
			}
		}
	}
}
void sortsel(int arr[])// selection sort
{
	for(int i = 0; i < 10; i++)
	{
		int min = i;
		for(int j = i + 1; j < 10; j++)
		{
			if(arr[j] < arr[min])
			{
				min = j;
			}
		}
		int tmp = arr[i];
		arr[i] = arr[min];
		arr[min] = tmp;
	}
}
void sortinsrt(int arr[])// insertion sort
{
	for(int i = 1; i < 10; i++)
	{
		int vitri = i - 1, giatri = arr[i];
		while(vitri >= 0 && giatri < arr[vitri])
		{
			arr[vitri + 1] = arr[vitri];
			--vitri;
		}
		arr[vitri + 1] = giatri;
	}
}
int cnt[1000];		// counting sort
void sortcnt(int arr[])
{
	int max = -1e9;
	for(int i = 0; i < 10; i++)
	{
		max = fmax(max, arr[i]);
		cnt[arr[i]]++;
	}
	int dem = 0;
	for(int i = 0; i <= max; i++)
	{
		for(int j = 0; j < cnt[i]; j++)
		{
			arr[dem++] = i;
		}
	}
}
void merge(int a[], int l, int m, int r)// tron & gan
{
	int n1 = m - l + 1, n2 = r - m;
	int x[n1], y[n2];
	for(int i = 0; i < n1; i++)
	{
		x[i] = a[l + i];
	}
	for(int i = 0; i < n2; i++)
	{
		y[i] = a[m + 1 + i];
	}
	int index = l;
	int i = 0, j = 0;
	while(i < n1 && j < n2)
	{
		if(x[i] <= y[j])
		{
			a[index++] = x[i++];
		}
		else
		{
			a[index++] = y[j++];
		}
	}
	while(i < n1)
	{
		a[index++] = x[i++];
	}
	while(j < n2)
	{
		a[index++] = y[j++];
	}
}
void sortmerge(int a[], int l, int r)// merge sort
{
	if(l < r)
	{
		int m = (l + r) / 2;
		sortmerge(a, l, m);
		sortmerge(a, m + 1, r);
		merge(a, l, m, r);
	}
}
int lomuto(int a[], int l, int r)// phan hoach lomuto
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
void sortquick(int a[], int l, int r)// quick sort
{
	if(l < r)
	{
		int pos = lomuto(a, l, r);
		sortquick(a, l, pos - 1);
		sortquick(a, pos + 1, r);
	}
}
int main()
{
	int a[10] = {5, 7, 6, 4, 8, 3, 1, 10, 2, 9};
	int b[10] = {8, 7, 3, 4, 9, 1, 2, 10, 6, 5};
	printf("\n");
	for(int i = 0; i < 10; i++)
	{
		printf("%d ", a[i]);
	}
	printf("\n");
	for(int i = 0; i < 10; i++)
	{
		printf("%d ", b[i]);
	}
}