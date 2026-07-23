/*
[Sắp xếp - Tìm
Kiếm]. Bài 13. Xếp
gạch
Nam có n viên gạch được đánh số từ 1 đến n. Các viên gạch có độ cứng lần lượt là a1, a2,..., an. Một viên
gạch có độ cứng x nghĩa là Nam có thể chồng lên trên viên gạch đó tối đa x viên gạch khác, nếu chồng
nhiều hơn thì viên gạch đó bị vỡ. Hỏi Nam có thể sắp được chồng gạch cao nhất là bao nhiêu?

Input Format
Dòng đầu tiên là số nguyên n - là số viên gạch.
Dòng tiếp theo gồm n số nguyên a1, a2,..., an mỗi số cách nhau một khoảng trắng.
Constraints
1<=n<=10^5; 0≤ai≤ 10^6
Output Format
Số nguyên xác định chiều cao cao nhất của chồng gạch mà Nam sắp được.

Sample Input 0
4
1 2 3 4
Sample Output 0
4
*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int sort(const void *a, const void *b)
{
	int *x = (int*)a;
	int *y = (int*)b;
	return *y - *x;
}
int main()
{
	int n; scanf("%d", &n);
	int a[n];
	for(int i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
	}
	qsort(a, n, sizeof(int), sort);
	int stand = a[0];
	int dem = 1;
	for(int i = 1; i < n; i++)
	{
		if(stand <= 0) break;
		++dem;
		stand = fmin(stand - 1, a[i]);
	}
	printf("%d", dem);
}