/*
[Mảng 1 Chiều]. Bài
12. Đếm tần suất số
nguyên tố
Cho một dãy số nguyên chưa biết trước số lượng phần tử, hãy đếm tần xuất hiện của các số nguyên tố
trong dãy và in ra theo thứ tự xuất hiện trong dãy

Input Format
Gồm nhiều dòng chưa các số nguyên trong dãy
Constraints
Dãy không quá 10000 số nguyên không âm. Các số trong dãy là số nguyên không âm không quá 10^9
Output Format
In ra các số nguyên tố trong dãy kèm theo tần suất của nó.

Sample Input 0
2 3 5 3 2 5 1
Sample Output 0
2 2
3 2
5 2
*/
#include <stdio.h>
#include <math.h>
int nt(int n)
{
	for(int i = 2; i < sqrt(n); i++)
	{
		if(n % i == 0)
		{
			return 0;
		}
	}
	return n > 1;
}
int main()
{
	int n = 0;
	int a[10000];
	int tmp;
	while(scanf("%d", &tmp) != -1)
	{
		a[n] = tmp; ++n;
	}
	for(int i = 0; i < n; i++)
	{
		int check = 1;
		for(int j = 0; j <= n; j++)
		{
			if(a[i] == a[j])
			{
				check = 0; break;
			}
		}
		if(check){
			if(nt(a[i]))
			{
				int cnt = 1;
				for(int j = i + 1; j < n; j++)
				{
					if(a[i] == a[j])
					{
						++cnt;
					}
				}
				printf("%d %d\n", a[i], cnt);
			}
		}
	}
	return 0;
}