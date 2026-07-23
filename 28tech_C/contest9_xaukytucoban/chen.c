/*
[Xâu kí tự cơ bản].
Bài 9. Chèn
Cho xâu kí tự S và số nguyên K, bạn được yêu cầu chèn dòng chữ "28tech" vào chỉ số K của xâu S

Input Format
Dòng 1 chứa xâu S. Dòng 2 chứa số nguyên K.
Constraints
1<=len(S)<=10000; 0<=K < len(S);
Output Format
In ra xâu S sau khi chèn

Sample Input 0
ClhiSYBOSg5Re
10
Sample Output 0
ClhiSYBOSg28tech5Re
*/
#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main()
{
	char a[100]; scanf("%s", a);
	int k; scanf("%d", &k);
	for(int i= 0; i < strlen(a); i++)
	{
		printf("%c", a[i]);
		if(i + 1 == k)
		{
			printf("28tech");
		}
	}
}