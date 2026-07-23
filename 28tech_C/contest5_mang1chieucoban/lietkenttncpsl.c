/*
[Mảng 1 chiều cơ
bản]. Bài 16. Liệt kê
Cho mảng số nguyên A[] gồm N phần tử, hãy đếm số lượng các phần tử thỏa mãn các yêu cầu sau
1. Số lượng số nguyên tố trong dãy
2. Số lượng số thuận nghịch trong dãy
3. Số lượng số chính phương trong dãy
4. Số lượng số có tổng chữ số của nó là số nguyên tố.

Input Format
Dòng đầu tiên là N : số lượng phần tử trong mảng; Dòng thứ 2 gồm N phần tử viết cách nhau một
khoảng trống.
Constraints
1<=N<=100; 0<=A[i]<=10000;
Output Format
In ra 4 dòng số lượng số tương ứng với 4 yêu cầu trên

Sample Input 0
6
4 1682 5972 6331 9872 3956 
Sample Output 0
0
1
1
4
*/
#include <stdio.h>
#include <math.h>
int nt(int n)
{
	for(int i = 2; i <= sqrt(n); i++)
	{
		if(n % i == 0)
			return 0;
	}
	return n > 1;
}
int tn(int n)
{
	int swap = 0, tmp = n;
	while(n)
	{
		swap = swap * 10 + n % 10;
		n /= 10;
	}
	return swap == tmp;
}
int cp(int n)
{
	int can = sqrt(n);
	return can * can == n;
}
int tongnt(int n)
{
	int tong = 0;
	while(n)
	{
		int cs = n % 10;
		tong += cs;
		n /= 10;
	}
	return nt(tong);
}
int main()
{
	int n; 
	scanf("%d", &n);
	int a[n];
	int dem1 = 0, dem2 = 0, dem3 = 0, dem4 = 0;
	for(int i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
	}
	for(int i = 0; i < n; i++)
	{
		if(nt(a[i])) ++dem1;
		if(tn(a[i])) ++dem2;
		if(cp(a[i])) ++dem3;
		if(tongnt(a[i])) ++dem4;	
	}
	printf("%d %d %d %d", dem1, dem2, dem3, dem4);
	return 0;
}