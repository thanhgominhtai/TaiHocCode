/*
[Sắp xếp - Tìm
Kiếm]. Bài 12. Khiêu
vũ
Trong lớp học có n bạn nam và m bạn nữ. Các bạn nam có chiều cao là a1, a2, ..., an. Các bạn nữ có
chiều cao là b1, b2, ..., bm. Nhân dịp lễ tổng kết cuối năm, cả lớp dự định tổ chức buổi khiêu vũ nhưng có
điều kiện là trong một đôi khiêu vũ bất kỳ, bạn nam phải cao hơn bạn nữ. Và mỗi bạn không tham gia
quá 1 đôi khiêu vũ. Hãy tính số lượng cặp đôi nhiều nhất thỏa mãn yêu cầu trên.

Input Format
Input: gồm 3 dòng - Dòng thứ nhất là hai số n, m mỗi số cách nhau một khoảng trắng. - Dòng thứ hai
gồm n số nguyên a1, a2, ..., an là chiều cao các bạn nam. - Dòng thứ ba gồm m số nguyên b1, b2, ...,
bm là chiều cao các bạn nữ.
Constraints
1<=n,m<=10^5; 1<=a[i],b[i]<=10^6;
Output Format
In ra số lượng cặp khiêu vũ nhiều nhất ghép được.

Sample Input 0
5 5
2956 2668 21199 20933 24224 
19573 13084 28958 11521 25628  
Sample Output 0
3
*/
#include <stdio.h>
#include <stdlib.h>
int sort(const void *a, const void *b)
{
	int *x = (int*)a;
	int *y = (int*)b;
	return *x - *y;
}
void ghep(int a[], int b[], int n, int m)
{
	int i = 0, j = 0;
	int dem = 0;
	while(i < n && j < m)
	{
		if(a[i] > b[j])
		{
			++dem;
			++i; ++j;
		}
		else ++i;
	}
	printf("%d", dem);
}
int main()
{
	int n, m; scanf("%d%d", &n, &m);
	int a[n], b[m];
	for(int i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
	}
	for(int i = 0; i < m; i++)
	{
		scanf("%d", &b[i]);
	}
	qsort(a, n, sizeof(int), sort);
	qsort(b, m, sizeof(int), sort);
	ghep(a, b, n, m);
}