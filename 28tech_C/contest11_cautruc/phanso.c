#include <stdio.h>
#include <math.h>
struct phanso{
	int tu, mau;
};
typedef struct phanso phanso;
int ucln(int a, int b){
	if(b == 0) return a;
	else return ucln(b, a % b);
}
int boichung(int a, int b){
	return a * b / ucln(a,b);
}
phanso tg(phanso a){
	phanso x;
	int uc = ucln(abs(a.tu), abs(a.mau));
	x.tu = a.tu / uc;
	x.mau = a.mau / uc;
	return x;
}
phanso tong(phanso a, phanso b){
	phanso x;
	int mc = boichung(a.mau, b.mau);
	x.mau = mc;
	x.tu = mc / a.mau * a.tu + mc / b.mau * b.tu;
	return tg(x);
}
phanso hieu(phanso a, phanso b){
	phanso x;
	int mc = boichung(a.mau, b.mau);
	x.mau = mc;
	x.tu = mc / a.mau * a.tu - mc / b.mau * b.tu;
	return tg(x);
}
phanso nhap(){
	phanso x;
	printf("nhap tu mau 2 so: ");
	scanf("%d%d", &x.tu, &x.mau);
	return x;
}
void in(phanso x){
	printf("%d/%d\n", x.tu, x.mau);
}
int main(){
	phanso ps1, ps2;
	ps1 = nhap();
	ps2 = nhap();
	in(tg(ps1));
	in(tg(ps2));
	in(tong(ps1, ps2));
	in(hieu(ps1, ps2));
	return 0;
}