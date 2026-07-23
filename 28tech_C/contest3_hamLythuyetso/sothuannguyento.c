 /*
 [Hàm, Lý Thuyết Số].
Bài 6. Số thuần
nguyên tố
Một số được coi là thuần nguyên tố nếu nó là số nguyên tố, tất cả các chữ số là nguyên tố và tổng chữ số
của nó cũng là một số nguyên tố. Bài toán đặt ra là đếm xem trong một đoạn giữa hai số nguyên cho
trước có bao nhiêu số thuần nguyên tố.

	Input Format
	Một dòng hai số nguyên dương tương ứng, cách nhau một khoảng trống.
	Constraints
	Các số đều không vượt quá 9 chữ số.
	Output Format
	Viết ra số lượng các số thuần nguyên tố tương ứng
	
Sample Input 0
2345 6789
Sample Output 0
15
 */
#include <stdio.h>
#include <math.h>
int nt(int n)
{
	if(n < 2) return 0;
	for(int i = 2; i <= sqrt(n); i++)
	{
		if(n % i == 0)
			return 0;
	}
	return 1;
}
int csnt(int n)
{
	int s;
	while(n)
	{
		s = n % 10;
		if(s != 2 && s != 3 && s != 5 && s != 7)
			return 0;
		n /= 10;
	}
	return 1;
}
int tongnt(int n)
{
	int sum = 0;
	while(n)
	{
		sum += n % 10;
		n /= 10;
	}
	if(nt(sum))
		return 1;
	else
		return 0;
	
}
int main()
{
	int a, b;
	scanf("%d%d", &a, &b);
	int dem = 0;
	for(int i = a; i <= b; i++)
	{
		if(csnt(i) && nt(i) && tongnt(i))
			++dem;
	}
	printf("%d", dem);
}