/*
[Mảng 1 Chiều]. Bài
10. Tìm hợp và giao
của 2 mảng 1
Cho 2 mảng số nguyên a và b gồm n và m phần tử. Gọi mảng c và d lần lượt là mảng chỉ bao gồm các
phần tử khác nhau của a và b. Hãy tìm mảng giao và hợp của mảng c và d và liệt kê theo thứ tự tăng
dần.
Hướng dẫn tìm giao : Dùng 1 map để đánh dấu những giá trị xuất hiện trong mảng a, Dùng 1 map để
đánh dấu những giá trị xuất hiện trong mảng b. Duyệt 1 trong 2 map và kiểm tra xem phần tử của map
hiện tại có nằm trong map thứ 2 hay không => giao. Tìm hợp : Đưa các phần tử trong 2 mảng vào 1 cái
set

Input Format
Dòng đầu tiên là số lượng phần tử của 2 dãy n và m. Dòng thứ 2 là n phần tử trong dãy số 1. Dòng thứ 3
là m phần tử trong dãy thứ 2.
Constraints
1≤n,m≤10^6; 0≤ai≤10^7
Output Format
Dòng đầu tiên in ra giao của 2 mảng c và d. Dòng thứ 2 in ra hợp của 2 mảng c và d.

Sample Input 0
5 6
1 2 1 2 7
1 2 3 4 5 6
Sample Output 0
1 2
1 2 3 4 5 6 7
*/
#include <stdio.h>
#include <math.h>
hop[1000000];
giao[100000];
int main()
{
	int n, m;
	scanf("%d%d", &n, &m);
	int a[n], b[m];
	int max = -1;
	for(int i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
		hop[a[i]] = 1;
		max = fmax(max, a[i]);
	}
	for(int i = 0; i < m; i++)
	{
		scanf("%d", &b[i]);
		hop[b[i]] = 1;
		max = fmax(max, b[i]);
	}
	int dem = 0;
	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < m; j++)
		{
			if(b[j] == a[i])
			{
				++dem;
				giao[a[i]] = 1;
			}
		}
	}
	for(int i = 1; i <= dem; i++)
	{
		if(giao[i])
		{
			printf("%d ", i);
		}
	}
	printf("\n");
	for(int i = 1; i <= max; i++)
	{
		if(hop[i])
		{
			printf("%d ", i);
		}
	}
}