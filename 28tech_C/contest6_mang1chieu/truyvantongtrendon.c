/*
[Mảng 1 Chiều]. Bài
17. Truy vấn tổng
trên đoạn
Cho dãy số A[] gồm có N phần tử, nhiệm vụ của bạn là tính tổng các số trong dãy từ vị trí l tới chỉ số r

Input Format
Dòng đầu tiên là số nguyên N. Dòng tiếp theo gồm N số nguyên A[i] và số Q là số cuối cùng ở dòng thứ
2. Q dòng tiếp theo mỗi dòng là 2 ví trị l, r.
Constraints
1≤ N ≤ 10^6; 1 ≤ A[i] ≤ 10^9; 1 ≤ Q ≤ 1000; 1 ≤ l ≤ r ≤ N
Output Format
In ra tổng các phần tử trong đoạn [l, r] của từng truy vấn trên 1 dòng.

Sample Input 0
5
1 2 3 4 5 
1
1 3
Sample Output 0
6
*/
#include <stdio.h>
int main()
{
	int n; scanf("%d", &n);
	int a[n];
	for(int i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
	}
	int q; scanf("%d", &q);
	while(q--)
	{
		int l, r; scanf("%d%d", &l, &r);
		--l; --r;
		int sum = 0;
		for(int i = l; i <= r; i++)
		{
			sum += a[i];
		}
		printf("%d\n", sum);
	}
	return 0;
}