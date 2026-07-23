/*
Mảng 1 Chiều]. Bài
18. Đếm số lượng cặp
số bằng nhau trong mảng
Cho dãy số A[] gồm có N phần tử, nhiệm vụ của bạn là đếm số lượng cặp số bằng nhau trong mảng.

Input Format
Dòng đầu tiên là số nguyên N. Dòng tiếp theo gồm N số nguyên A[i]
Constraints
1≤ N ≤ 10^6; 1 ≤ A[i] ≤ 10^6
Output Format
In ra số lượng cặp số bằng nhau trong mảng, không xét đến thứ tự.

Sample Input 0
6
2 2 1 3 2 3
Sample Output 0
4
Explanation 0
Các cặp số bằng nhau theo chỉ số : (0, 1), (0, 4), (1, 4), (3, 5)
*/
#include <stdio.h>
#include <math.h>
int mark[1000000];
int main()
{
	int n; scanf("%d", &n);
	int max = -1;
	for(int i = 0; i < n; i++)
	{
		int x;
		scanf("%d", &x);
		mark[x]++;
		max = fmax(max, x);
	}
	long long kq = 0;
	for(int i = 0; i <= max; i++)
	{
		if(mark[i] != 0)
		{
			kq += 1.0 * mark[i] * (mark[i] - 1) / 2;
		}
	}
	printf("%lld", kq);
	return 0;
}