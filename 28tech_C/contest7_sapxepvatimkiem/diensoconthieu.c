/*
[Sắp xếp - Tìm
Kiếm]. Bài 20. Điền
số còn thiếu
Cho mảng A[] gồm n số nguyên dương. Gọi L, R là min và max các phần tử của A[]. Nhiệm vụ của bạn là
tìm số phần tử cần thiết cần thêm vào mảng để mảng có đầy đủ các số trong khoảng [L, R]. Ví dụ A[] =
{5, 7, 9, 3, 6, 2 } ta nhận được kết quả là 2 tương ứng với các số còn thiếu là 4, 8.

Input Format
Dòng đầu tiên đưa vào n, tương ứng với số phần tử của mảng A[]; dòng tiếp theo là n số A[i] ; các số
được viết cách nhau một vài khoảng trống.
Constraints
1=n<=10^6; 0<=a[i]<=10^6;
Output Format
In ra số lượng số còn thiếu

Sample Input 0
5
4 5 3 8 6
Sample Output 0
1
*/
#include <stdio.h>
#include <math.h>
int mark[1000000];
int main()
{
	int n;
	scanf("%d", &n);
	int a[n];
	int min = 1e9;
	int max = -1;
	for(int i =0; i < n; i++)
	{
		scanf("%d", &a[i]);
		max = fmax(max, a[i]);
		min = fmin(min, a[i]);
		mark[a[i]] = 1;
	}
	int dem = 0;
	for(int i = min; i <= max; i++)
	{
		if(mark[i] == 0)
		{
			++dem;
		}
	}
	printf("%d", dem);
}