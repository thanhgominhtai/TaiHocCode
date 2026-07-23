#include <stdio.h>
struct sophuc{
	int thuc, ao;
};
typedef struct sophuc sp;

sp nhap(){
	sp x;
	printf("nhap thuc ao: ");
	scanf("%d%d", &x.thuc, &x.ao);
	return x;
}
int main(){
	sp a, b;
	a = nhap();
	b = nhap();
	sp tong, hieu, tich;
	tong.thuc = a.thuc + b.thuc; tong.ao = a.ao + b.ao;
	hieu.thuc = a.thuc - b.thuc; hieu.ao = a.ao - b.ao;
	tich.thuc = a.thuc * b.thuc - a.ao * b.ao;
	tich.ao = a.thuc * b.ao + a.ao * b.thuc;
	printf("%d %d\n%d %d\n%d %d\n", tong.thuc, tong.ao, hieu.thuc, hieu.ao, tich.thuc, tich.ao);
	return 0;
}