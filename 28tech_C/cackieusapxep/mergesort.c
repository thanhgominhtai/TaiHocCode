//merge sort
#include <stdio.h>
// bai tron hai mang da sap xep
void troncach1(int a[], int n, int b[], int m)// tron hai mang da sap xep roi in ra lun
{
	int i = 0, j = 0;
	while(i < n && j < m)
	{
		if(a[i] <= b[j])
		{
			printf("%d ", a[i]);
			++i;
		}
		else
		{
			printf("%d ", b[j]);
			++j;
		}
	}
	while(i < n)
	{
		printf("%d ", a[i]);
		++i;
	}
	while(j < m)
	{
		printf("%d ", b[j]);
		++j;
	}
}
void troncach2(int a[], int n, int b[], int m)// tron roi hai mang roi luu vao mang khac
{
	int i = 0, j = 0;
	int c[n + m]; // tao mang c luu hai mang a, b
	int index = 0;
	while(i < n && j < m)
	{
		if(a[i] <= b[j])
		{
			c[index++] = a[i++];
		}
		else
		{
			c[index++] = b[j++];
		}
	}
	while(i < n)
	{
		c[index++] = a[i++];
	}
	while(j < m)
	{
		c[index++] = b[j++];
	}
	for(int i = 0; i < n + m; i++)
	{
		printf("%d ", c[i]);
	}
}
//mergesort
//tron cac phan tu tu chi so left => mid va cac phan tu tu ci mid => right
//thanh cac phan tu tang dan
void merge(int a[], int l, int m, int r)
{
	//tam thoi luu cac phan tu tu chi so l => m vao 1 mang
	//luu cac phan tu tu chi so m + 1 => r vao 1 mang
	int n1 = m - l + 1, n2 = r - m;// n1 la cac phan tu tu l => m va n2 tu m => r
	int x[n1], y[n2];
	//dua cac phan tu tu chi so l => m vao mang x
	for(int i = 0; i < n1; i++)
	{
		x[i] = a[l + i];
	}
	//dua cac phan tu tu chi so m + 1 => r vao mang y
	for(int i = 0; i < n2; i++)
	{
		y[i] = a[m + 1 + i];
	}
	//tron 2 mang x, y => gan lai vao mang a[l, r]
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
void mergesort(int a[], int l, int r)
{
	if(l < r)
	{
		int m = (l + r) / 2;
		mergesort(a, l, m);//goi de quy ve nua ben trai
		mergesort(a, m + 1, r);//goi de quy ve nua ben phai
		merge(a, l, m, r);
	}
}
int main()
{
	int n, m;
	scanf("%d", &n);
//	scanf("%d", &m);
	int a[n];
	int b[m];
	for(int i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
	}
//	for(int i = 0; i < m; i++)
//	{
//		scanf("%d", &b[i]);
//	}
	mergesort(a, 0, n - 1);
	for(int i = 0; i < n; i++)
	{
		printf("%d ", a[i]);
	}
}


