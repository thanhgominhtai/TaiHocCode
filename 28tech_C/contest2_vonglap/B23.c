/*
[Vòng lặp]. Bài 23.
Vẽ hình 3
Nhập n là một số nguyên không quá 100. In ra các hình tương ứng, mỗi hình cách nhau một dòng trống.

		Input Format
		Số nguyên dương N
		Constraints
		1≤n≤100
		Output Format
		In ra hình số theo mẫu

Sample Input 0
5
Sample Output 0
1 2 3 4 5 
6 7 8 9 10 
11 12 13 14 15 
16 17 18 19 20 
21 22 23 24 25 

1 2 3 4 5 
2 3 4 5 6 
3 4 5 6 7 
4 5 6 7 8 
5 6 7 8 9 

~~~~1
~~~22
~~333
~4444
55555

1 
2 6 
3 7 10 
4 8 11 13 
5 9 12 14 15
*/
#include <stdio.h>
int main()
{
	int n;
	scanf("%d", &n);
//hinh 1
	int a = 1;
	for(int i = 1; i <= n; i++)
	{
		for(int j = 1; j <= n; j++)
		{
			printf("%d ", a);
			++a;
		}
		printf("\n");
	}
	printf("\n");
//hinh 2
	int b = 1;
	for(int i = 1; i <= n; i++)
	{
		int b = i;
		for(int j = 1; j <= n; j++)
		{
			printf("%d ", b);
			++b;
		}
		printf("\n");
	}
	printf("\n");
//hinh 3
	for(int i = 1; i <= n; i++)
	{
		for(int j = n; j <= n; j--)
		{
			if(j < 1)
			{
				break;
			}
			if(j <= i)
			
			{
				printf("%d", i);
			}else printf("`");
		}
		printf("\n");
	}
	printf("\n");
//hinh 4
	for(int i = 1; i <= n; i++)
	{
		int c = i;
		int kc = n - 1;
		for(int j = 1; j <= i; j++)
		{
			printf("%d", c);
			c += kc;
			kc--;
		}
		printf("\n");
	}
}