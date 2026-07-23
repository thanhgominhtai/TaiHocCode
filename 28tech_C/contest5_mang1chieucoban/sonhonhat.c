/*
[Mảng 1 chiều cơ
bản]. Bài 3. Số nhỏ
nhất
Cho mảng số nguyên A[] gồm N phần tử, hãy đếm xem trong mảng của bạn có bao nhiêu số có cùng giá
trị nhỏ nhất. Ví dụ mảng A = {1, 2, 1, 3, 5} thì số nhỏ nhất trong mảng là 1 xuất hiện 2 lần.

Input Format
Dòng đầu tiên là số nguyên dương N; Dòng thứ 2 gồm N số nguyên viết cách nhau một vài khoảng trắng
Constraints
1<=N<=1000; -10^3<=A[i]<=10^3;
Output Format
In ra đáp án của bài toán

Sample Input 0
5
-854 600 222 472 207 
Sample Output 0
1
*/
#include <stdio.h>
#include <math.h>
int main()
{
	int n; 
	scanf("%d", &n);
	int a[n];
	for(int i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
	}
	int min = 1e9, dem = 0;
	for(int i = 0; i < n; i++)
	{
		min = fmin(min, a[i]);
	}
	for(int i = 0; i < n; i++)
	{
		if(min == a[i])
			++dem;
	}
	printf("%d\n", min);
	if(dem > 1)
		printf("xuat hienh %d lan", dem);
	return 0;
}