/*
[Xâu kí tự cơ bản].
Bài 6. Sắp xếp chữ số
Cho số nguyên không âm N, hãy tiến hành sắp xếp các chữ số của N theo thứ tự tăng dần rồi in ra màn
hình, trong trường hợp số sau khi sắp xếp xuất hiện các chữ số 0 ở đầu thì ra không in những chữ số 0 vô
nghĩa này.

Input Format
Dòng duy nhất chứa số nguyên dương N
Constraints
0<=N<=10^18
Output Format
In ra số N sau khi sắp xếp

Sample Input 0
999968677
Sample Output 0
667789999
Sample Input 1
10
Sample Output 1
1
*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int sort(const void *a, const void *b)
{
	char *x = (char*)a;
	char *y = (char*)b;
	return *x - *y;
}
int main()
{
	char a[100]; scanf("%s", a);
	qsort(a, strlen(a), sizeof(char), sort);
	int i = 0;
	while(i < strlen(a) - 1 && a[i] == '0')
	{
		++i;
	}
	for(int j = i; j < strlen(a); j++)
	{
		printf("%c", a[j]);
	}
}