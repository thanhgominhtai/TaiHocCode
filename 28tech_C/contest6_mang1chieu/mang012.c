/*
[Mảng 1 Chiều]. Bài
25. Mảng 012
Cho dãy số A[] gồm có N phần tử, các phần tử trong mảng chỉ là 0 1 hoặc 2. Hãy sắp xếp các phần tử
trong mảng theo thứ tự tăng dần.

Input Format
Dòng đầu tiên là số nguyên N. Dòng tiếp theo gồm N số nguyên A[i]
Constraints
1≤ N ≤ 10^7; 0 ≤ A[i] ≤ 2
Output Format
In ra mảng được sắp xếp tăng dần.

Sample Input 0
5
1 1 0 2 1
Sample Output 0
0 1 1 1 2
*/
#include <stdio.h>
int main()
{
	int n; scanf("%d", &n);
	int a[3] = {1, 2};
	for(int i = 0; i < 3; i++)
	{
		printf("%d ", a[i]);
	}
//	for(int i = 0; i < n; i++)
//	{
//		int x; scanf("%d", &x);
//		a[x]++;
//	}
//	for (int i = 0; i < 3; i++)
//	{
//		for(int j = 0; j < a[i]; j++)
//		{
//			printf("%d ", i);
//		}
//	}
}