/*
[Xâu kí tự cơ bản].
Bài 3. Kí tự trong
đoạn
Cho một xâu kí tự S chỉ bao gồm chữ số và chữ cái, hãy tính tổng chữ số xuất hiện trong xâu.

Input Format
Dòng duy nhất chứa xâu S
Constraints
1<=len(S)<=10000
Output Format
In ra tổng chữ số xuất hiện trong xâu

Sample Input 0
315abSA9172WSbn2d0
Sample Output 0
30
Explanation 0
Tổng các số xuất hiện trong xâu = 3 + 1 + 5 + 9 + 1 + 7 + 2 + 2 + 0 = 30
*/
#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main()
{
	char a[100];
	scanf("%s", &a);
	int sum = 0;
	for(int i = 0; i < strlen(a); i++)
	{
		if(isdigit(a[i]))
		{
			sum += a[i] - '0';
		}
	}
	printf("%d", sum);
}