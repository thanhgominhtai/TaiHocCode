/*
[Vòng lặp]. Bài 22.
Vẽ hình 2
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
*
**
***
****
*****

*****
****
***
**
*

	*
   **
  ***
 ****
*****

*****
 ****
  ***
   **
    *
 
*
**
* *
*  *
*****
*/
#include <stdio.h>
int main()
{
	//hinh 1
	int n;
	scanf("%d", &n);
	for(int i = 1; i <= n; i++)
	{
		for(int j = 1; j <= i; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	printf("\n");
	//hinh 2
	for(int i = 1; i <= n; i++)
	{
		for(int j = n; j <= n; j--)
		{
			printf("*");
			if(j == i)
			{
				break;
			}
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
			else if(j > i)
			{
				printf(" ");
			}else printf("*");
		
		}
		printf("\n");
	}
	// hinh 4
	printf("\n");
	for(int i = 1; i <= n; i++)
	{
		for(int j = 1; j <= n; j++)
		{
			if(j >= i )
				printf("*");
			else printf(" ");
		}
		printf("\n");
	}
	//hinh 5
	printf("\n");
	for(int i = 1; i <= n; i++)
	{
		for(int j = 1; j <= n; j++)
		{
			if(i == n || j == i || j == 1)
			{
				printf("*");
			}else printf(" ");
		}
		printf("\n");
	}
	return 0;
}