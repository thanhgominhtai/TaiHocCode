/*
[Vòng lặp]. Bài 21.
Vẽ hình 1
Nhập n là một số nguyên không quá 100. In ra các hình tương ứng, mỗi hình cách nhau một dòng trống.

		Input Format
		Số nguyên dương N
		Constraints
		1≤n≤100
		Output Format
		In ra hình sao theo mẫu
		
Sample Input 0
5
Sample Output 0
*****
*****
*****
*****
*****

*****
* 	*
* 	*
* 	*
*****

*****
*###*
*###*
*###*
*****

1 1 1 1 1 
2 		2 
3 		3 
4		4 
5 5 5 5 5 
*/
#include <stdio.h>
int main()
{// hinh 1
	int n;
	scanf("%d", &n);
	int i = 0;
	for(int i = 1; i <= n; i++)
	{
		for(int j = 1; j <= n; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	printf("\n\n");
//	hinh 2
	for(int i = 1; i <= n; i++)
	{
		for(int j = 1; j <= n; j++)
		{
			if(i == 1 || i == n || j == 1 || j == n)
			{
				printf("*");
			}
			else 
			{
				printf(" ");
			}
		}
		printf("\n");
	}
	printf("\n\n");
// hinh 3
	for(int i = 1; i <= n; i++)
	{
		for(int j = 1; j <= n; j++)
		{
			if(i == 1 || i == n || j == 1 || j == n)
			{
				printf("*");
			}
			else 
			{
				printf("#");
			}
		}
		printf("\n");
	}
	printf("\n\n");
// hinh 4
	for(int i = 1; i <= n; i++)
	{
		for(int j = 1; j <= n; j++)
		{
			if(i == 1 || i == n || j == 1 || j == n)
			{
				printf("%d", i);
			}
			else 
			{
				printf(" ");
			}
		}
		printf("\n");
	}
}
	
