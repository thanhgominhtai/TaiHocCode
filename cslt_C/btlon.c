/*
Project 2.Viết chương trình quản lý sách, mỗi cuốn sách có các thông tin: mã sách, tên/tiêu đề sách, tác
giả, năm xuất bản, giá bán... Nhà sách muốn tin học hóa và cần viết một chương trình có các
chức năng:
(1) Nhập thông tin sách
(2) In danh sách các sách mới nhập
(3) Tìm thông tin dựa theo mã sách
(4) Tìm thông tin dựa theo tiêu đề sách
(5) Tìm thông tin sách theo năm xuất bản
(6) Tìm thông tin sách theo giá
(7) Thoát
Ghi chú: Mục 2-In danh sách nên sắp xếp tăng dần hoặc giảm dần.
*/
#include <stdio.h>
#include <string.h>
struct sach{
	char ma[30];
	char ten[30];
	char tg[30];
	int nam, gia;
};
typedef struct sach sach;
//1
sach nhap()
{
	sach x;
	{
		printf("nhap ma: ");
		gets(x.ma);
		printf("nhap ten: ");
		gets(x.ten);
		printf("nhap tac gia: ");
		gets(x.tg);
		printf("nhap nam: ");
		scanf("%d", &x.nam);
		printf("nhap gia: ");
		scanf("%d", &x.gia);
	}
	return x;
}
void xuat(sach x)//2
{	
	printf("ma: %s\tten: %s\tt.gia: %s\tnam: %d\tgia:%d\n", x.ma, x.ten, x.tg, x.nam, x.gia);
}
void findma(sach a[], int n, char ms[])//3
{
	int thay = 0;
	for(int i = 0; i < n; i++)
	{
		if(strcmp(ms, a[i].ma) == 0)
		{
			printf("Thong tin sach tim thay la:\n");
			xuat(a[i]);
			thay = 1; // tim thay
			break;
		}
	}
	if(thay == 0)
	{
		printf("ko thay");
	}
}
void findten(sach a[], int n, char ts[])//4
{
	int thay = 0;
	for(int i = 0; i < n; i++)
	{
		if(strcmp(ts, a[i].ten) == 0)
		{
			printf("Thong tin sach tim thay la:\n");
			xuat(a[i]);
			thay = 1;// thay
			break;
		}
	}
	if(thay == 0)
	{
		printf("ko thay");
	}
}
void findnam(sach a[], int n, int year)//5
{
	int thay = 0;
	for(int i = 0; i < n; i++)
	{
		if(a[i].nam == year)
		{
			xuat(a[i]);
			thay = 1;// thay
		}
	}
	if(thay == 0)
	{
		printf("ko thay");
	}
}
void findgia(sach a[], int n, int dola)//6
{
	int thay = 0;
	for(int i = 0; i < n; i++)
	{
		if(a[i].gia == dola)
		{
			xuat(a[i]);
			thay = 1;// thay
		}
	}
	if(thay == 0)
	{
		printf("ko thay");
	}
}
int main()
{
	int n;
	struct sach a[30];
	int luaChon;
	do
    {
        printf("\nMenu:\n");
        printf("1. Nhap thong tin sach\n");
        printf("2. In danh sach cac sach\n");
        printf("3. Tim sach theo ma\n");
        printf("4. Tim sach theo tieu de\n");
        printf("5. Tim sach theo nam xuat ban\n");
        printf("6. Tim sach theo gia\n");
        printf("7. Thoat\n\n");
        printf("nhap lua chon: ");
        scanf("%d", &luaChon);
        // nhap lua chon
        switch (luaChon) {
            case 1:
				printf("nhap so luong sach: ");
				scanf("%d", &n);
				for(int i = 0; i < n; i++)
				{
					fflush(stdin);
                	a[i] = nhap();
				}
                break;
            case 2:
            	for(int i = 0; i < n; i++)
            	{
            		xuat(a[i]);
				}
                break;
            case 3:
				fflush(stdin);
				printf("\nNhap ma sach can tim: ");
            	char ms[30];
				gets(ms);
				findma(a, n, ms);
                break;
            case 4:
            	fflush(stdin);
				printf("\nNhap tieu de can tim: ");
            	char ts[30];
				gets(ts);
				findten(a, n, ts);
                break;
            case 5:
				printf("\nNhap nam can tim: ");
				int year;
				scanf("%d", &year);
				findnam(a, n, year);
                break;
            case 6:
				printf("\nNhap gia can tim: ");
            	int dola;
				scanf("%d", &dola);
				findgia(a, n, dola);
                break;
            case 7:
                printf("Thoat chuong trinh.\n");
                break;
            default:
                printf("ko hop le\n");
    	}
	}while(luaChon != 7);
}