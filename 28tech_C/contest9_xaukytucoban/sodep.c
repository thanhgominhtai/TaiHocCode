/*
[Xâu kí tự cơ bản].
Bài 4. Số đẹp
Cho số nguyên dương N có ít nhất 2 chữ số, một số được coi là số đẹp nếu 2 chữ số liền kề của nó chỉ
lệch nhau đúng 1 đơn vị, ví dụ về số đẹp : 12345, 121212, 78987. Hãy kiểm tra xem N có phải là số đẹp
hay không?

Input Format
Dòng duy nhất chứa số nguyên dương N
Constraints
10<=N<=10^18
Output Format
In ra YES nếu N là số đẹp, ngược lại in ra NO

Sample Input 0
244
Sample Output 0
NO
Sample Input 1
10
Sample Output 1
YES
*/
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
int main()
{
	char a[100];
	scanf("%s", &a);
	int check = 1;
	for(int i = 1; i < strlen(a); i++)
	{
		if(abs(a[i] - a[i - 1]) != 1)
		{
			check = 0; break;
		}
	}
	if(check) printf("yes");
	else printf("no");
}