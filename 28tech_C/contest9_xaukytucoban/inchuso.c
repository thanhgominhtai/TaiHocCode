/*
[Xâu kí tự cơ bản].
Bài 7. In ra chữ số
Cho xâu kí tự S bao gồm chữ cái và chữ số, thực hiện tách riêng chữ số và chữ cái của S.

Input Format
Dòng duy nhất chứa xâu S
Constraints
1<=len(S)<=10000
Output Format
Dòng 1 in ra những chữ số xuất hiện trong S theo thứ tự xuất hiện. Dòng 2 in ra những chữ cái xuất hiện
trong S theo thứ tự xuất hiện.

Sample Input 0
I68c8SASicab6AiI9i
Sample Output 0
68869
IcSASicabAiIi
*/
#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main()
{
	char a[100]; scanf("%s", a);
	for(int i = 0; i < strlen(a); i++)
	{
		if(isdigit(a[i]))
		{
			printf("%c", a[i]);
		}
	}
	printf("\n");
	for(int i = 0; i < strlen(a); i++)
	{
		if(isalpha(a[i]))
		{
			printf("%c", a[i]);
		}
	}
}