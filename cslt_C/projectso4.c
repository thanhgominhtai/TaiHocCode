/*
Project 4. Viet chuong trinh quan ly ban hang gom cac thong tin sau: ma hang, ten hang, don vi tinh, so 
luong, don gia ban, thanh tien = so luong * don gia, chiet khau = 5% * thanh tien, doanh thu = 
thanh tien – chiet khau. Chuong trinh cho phep thuc hien cac cong viec sau:

(1) Nhap thong tin ban hang (gom cac thong tin tren)
(2) In liet ke chi tiet ban hang
(3) Tim thong tin dua theo ma hang
(4) In ra mat hang co so luong ban lon nhat
(5) In ra mat hang co doanh thu ban nho nhat
(6) Sap xep thu tu giam dan theo doanh thu ban hang
(7) Ghi chu: Muc 2- In liet ke chi tiet ban hang nen sap xep tang dan hoac giam dan.
Hay lap bang thong ke doanh thu ban hang nhu bang sau:

Ten hang         Doanh thu
Mat hang A       ?
Mat hang B       ?
Tong cong        ?
*/
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <ctype.h>
#include <stdlib.h>
struct sanpham{
	char mh[30];
	char th[30];
	int sl, gb;
	long long tt, ck, dt; 
};
typedef struct sanpham sanpham;

// tinh thanh tien
void tt(sanpham a[], int n)
{
	for(int i = 0; i < n; i++)
	{
		a[i].tt = a[i].sl * a[i].gb;
	}
}
//tinh chiet khau
void ck(sanpham a[], int n)
{
	for(int i = 0; i < n; i++)
	{
		a[i].ck = a[i].tt * 0.05;
	}
}
//tinh doanh thu tung san pham
void dt(sanpham a[], int n)
{
	for(int i = 0; i < n; i++)
	{
		a[i].dt = a[i].tt - a[i].ck;
	}
}
//tong doanh thu tat ca san pham
long long tong(sanpham a[], int n)
{
	long long sum = 0;
	for(int i = 0; i < n; i++)
	{
		sum += a[i].dt;
	}
	return sum;
}
//(1) Nhap thong tin ban hang (gom cac thong tin tren)
sanpham nhap(FILE *f)
{
	sanpham x;
	{
		printf("nhap ma san pham: "); 
		fscanf(f, "%s", x.mh);
		puts(x.mh);
		printf("nhap ten hang: "); 
		fscanf(f, "%s", x.th);
		puts(x.th);
		printf("nhap so luong: "); 
		fscanf(f, "%d", &x.sl);
		printf("%d\n", x.sl);
		printf("nhap gia ban: "); 
		fscanf(f, "%d", &x.gb);
		printf("%d\n", x.gb);
	}
	return x;
}
//(2) In liet ke chi tiet ban hang
void in(sanpham x)
{	
	printf("ma: %s\t|ten: %s\t|s.luong: %d\t|gia: %d\t|t.tien: %d\t|c.khau:%d\t|d.thu: %d\n", x.mh, x.th, x.sl, x.gb, x.tt, x.ck, x.dt);
}
//(3) Tim thong tin dua theo ma hang
void timkiem(sanpham a[], int n, char name[])
{
	int find = 0;
	for(int i = 0; i < n; i++)
	{
		if(strcmp(name, a[i].mh) == 0)
		{
			printf("Thong tin hang ban tim la: \n\n");
			in(a[i]);
			find = 1;	// tim thay
			break;
		}
	}
	if(!find)
	{
		printf("\nKhong tim thay san pham !\n");
	}
}
//(4) In ra mat hang co so luong ban lon nhat
void maxSlHang(sanpham a[], int n)
{
	int max = -1;
	for(int i = 0; i < n; i++)
	{
		max = fmax(max, a[i].sl);
	}
	printf("Thong tin san pham co so luong cao nhat:\n\n");
	for(int i = 0; i < n; i++)
	{
		if(max == a[i].sl)
		{
			in(a[i]);
		}
	}
}
//(5) In ra mat hang co doanh thu ban nho nhat
void minDtHang(sanpham a[], int n)
{
	int min = 1e9;
	for(int i = 0; i < n; i++)
	{
		min = fmin(min, a[i].dt);
	}
	printf("Thong tin san pham co doanh thu thap nhat:\n\n");
	for(int i = 0; i < n; i++)
	{
		if(min == a[i].dt)
		{
			in(a[i]);
		}
	}
}
//(6) Sap xep thu tu giam dan theo doanh thu ban hang
void xapxep(sanpham a[], int n) // thuat toan selection sort
{
	for(int i = 0; i < n; i++)
	{
		int max = i;
		for(int j = i + 1; j < n; j++)
		{
			if(a[j].dt > a[max].dt)
			{
				max = j;
			}
		}
		sanpham tmp;
		tmp = a[i];
		a[i] = a[max];
		a[max] = tmp;
	}
}

//(7) Hay lap bang thong ke doanh thu ban hang
void bangDt(sanpham a[], int n)
{
	printf("Ten hang\t\t\tDoanh thu\n");
	for(int i = 0; i < n; i++)
	{
		printf("%s\t\t\t%lld\n", a[i].th, a[i].dt);
	}
	printf("Tong:\t\t\t\t%lld", tong(a, n));
}
int main()
{
	int n;
	sanpham a[20];
	while(1)// cho vong lap chay ko ngung
	{
		printf("\n---------------------MENU---------------------\n");
		printf("1. Nhap thong tin ban hang.\n");
		printf("2. In liet ke chi tiet hang.\n");
		printf("3. Tim thong tin dua theo ma hang.\n");
		printf("4. In ra mat hang co so luong ban lon nhat.\n");
		printf("5. In ra mat hang co doanh thu ban nho nhat.\n");
		printf("6. Sap xep thu tu giam dan theo doanh thu ban hang.\n");
		printf("7. Lap bang thong ke doanh thu ban hang.\n");
		printf("0. Thoat.");
		printf("\n-------------------------------------------------\n\n");
		printf("nhap lua chon: ");
		int lc; scanf("%d", &lc);
		if(lc == 1)// lua chon 1
		{
			FILE *f;
			f = fopen("file.txt", "r");
			if(f == NULL)
			{
				printf("loi mo file");
				return -1;
			} 
			printf("Nhap so luong hang: ");
			scanf("%d", &n);
			for(int i = 0; i < n; i++)
			{
				printf("-Nhap hang %d.\n", i + 1);
				a[i] = nhap(f);
			}
			tt(a, n);
			ck(a, n);
			dt(a, n);
			fclose(f);
		}
		else if(lc == 2)// lua chon 2
		{
			for(int i = 0; i < n; i++)
			{
				in(a[i]);
			}
		}
		else if(lc == 3)// lua chon 3
		{
			char name[50];
			printf("\nNhap ma hang muon tim: ");
			getchar();
			gets(name);
			timkiem(a, n, name);
		}
		else if(lc == 4)// lua chon 4
		{
			maxSlHang(a, n);
		}
		else if(lc == 5)// lua chon 5
		{
			minDtHang(a, n);
		}
		else if(lc == 6)// lua chon 6
		{
			sanpham b[20];
			for(int i = 0; i < n; i++)
			{
				b[i] = a[i];
			}
			xapxep(b, n);
			for(int i = 0; i < n; i++)
			{
				in(b[i]);
			}
		}
		else if(lc == 7)// lua chon 7
		{
			bangDt(a, n);
		}
		else if(lc == 0) // thoat vong lap
		{
			break;
		}
	}
	printf("\n------Thank You. !------");
	return 0;
}