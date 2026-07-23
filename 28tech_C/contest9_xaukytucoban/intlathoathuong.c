/*
[Xâu kí tự cơ bản].
Bài 2. In lật ngược, in
hoa, in thường
Cho xâu kí tự S có không quá 10000 kí tự, S bao gồm kí tự in hoa, in thường, chữ số và kí tự đặc biệt.
Hãy tự viết 3 hàm lật ngược xâu, viết hoa và viết thường xâu kí tự

Input Format
Dòng duy nhất chứa xâu S
Constraints
1<=len(S)<=10000
Output Format
Dòng 1 in ra xâu S lật ngược. Dòng 2 in ra xâu S ở dạng in thường. Dòng 3 in ra xâu S ở dạng in hoa.

Sample Input 0
hjweXafgbDeGxEa
Sample Output 0
aExGeDbgfaXewjh
hjwexafgbdegxea
HJWEXAFGBDEGXEA
*/
#include <stdio.h>
#include <string.h>
#include <ctype.h>
void lat(char a[])
{
	for(int i = strlen(a) - 1; i >= 0; i--)
	{
		printf("%c", a[i]);
	}
}
void hoa(char a[])
{
	for(int i = 0; i < strlen(a); i++)
	{
		a[i] = toupper(a[i]);
		printf("%c", a[i]);
	}
}
void thuong(char a[])
{
	for(int i = 0; i < strlen(a); i++)
	{
		a[i] = tolower(a[i]);
		printf("%c", a[i]);
	}
}
int main()
{
	char a[100];
	scanf("%s", &a);
	lat(a);
	printf("\n");
	thuong(a);
	printf("\n");
	hoa(a);
}