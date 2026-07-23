/*
[Xâu kí tự cơ bản].
Bài 5. Chèn dấu phẩy
Khi viết 1 số nguyên dương quá lớn, người ta thường thêm các dấu phẩy vào giữa các chữ số cho dễ đọc,
ví dụ số N = 123456789 được viết thành 123,456,789, N = 12345 được viết thành 12,345. Nhiệm vụ của
bạn là thêm dấu phẩy vào số N

Input Format
Dòng duy nhất chứa số nguyên dương N
Constraints
1<=N<=10^18
Output Format
In ra N sau khi thêm dấu phẩy.

Sample Input 0
999970094
Sample Output 0
999,970,094
*/
#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main()
{
	char a[100];
	char b[1000];
	scanf("%s", &a);
	int dem = 0;
	int index = 0;
	for(int i = strlen(a) - 1; i >= 0; i--)
	{
		++dem;
		b[index] = a[i];
		++index;
		if(index % 3 == 0 && i != 0)
		{
			b[index] = ',';
			++index;
		}
	}
	for(int i = strlen(b) - 1; i >= 0; i--)
	{
		printf("%c", b[i]);
	}
}