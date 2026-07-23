/*
[Mảng 1 Chiều]. Bài
22. Số bị lặp đầu tiên
Cho mảng các số nguyên. Tìm phần tử lặp đầu tiên trong mảng.

Input Format
Dòng đầu tiên là số lượng phần tử trong mảng n. Dòng thứ 2 là các phần tử ai trong mảng .
Constraints
1≤n≤1000000; 0≤ai≤10^6
Output Format
In ra số bị lặp đầu tiên trong mảng, nếu không có số nào bị lặp in ra -1.

Sample Input 0
5
1 2 2 3 1
Sample Output 0
2 
*/
#include <stdio.h>
int mark[1000000];
int main()
{
	int n; scanf("%d", &n);
	int a[n];
	for(int i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
	}
	for(int i = 0; i < n; i++)
	{
		if(mark[a[i]] != 0 ) 
		{
			printf("%d", a[i]);
			return 0;
		}
		mark[a[i]] = 1;
	}
	printf("-1");
}