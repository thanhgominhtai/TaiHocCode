/*
[Mảng 1 chiều cơ
bản]. Bài 6. Cặp số 1
Cho mảng số nguyên A[] gồm N phần tử, hãy đếm xem trong mảng A[] tồn tại bao nhiêu cặp số A[i],
A[j] với i khác j sao cho tổng của 2 phần tử này bằng số K cho trước.

Input Format
Dòng đầu tiên là số nguyên dương N; Dòng thứ 2 gồm N số nguyên viết cách nhau một vài khoảng trắng;
Dòng thứ 3 là số nguyên K
Constraints
1<=N<=1000; 0<=A[i], X<=10^3;
Output Format
In ra số lượng cặp thỏa mãn

Sample Input 0
5
1 2 3 1 2
3
Sample Output 0
4
*/
int main()
{
	int n;
	scanf("%d", &n);
	int a[n];
	for(int i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
	}
	int k;
	scanf("%d", &k);
	int dem = 0, tong = 0;
	for(int i = 0; i < n - 1; i++)
	{
		for(int j = i + 1; j < n; j++)
		{
			tong = a[i] + a[j];
			if(tong == k)
				++dem;
		}
		
	}
	printf("%d", dem);
	return 0;
}