/*
[Hàm, Lý Thuyết Số].
Bài 25. Số có số
lượng ước là số lẻ
Kiểm tra xem một số có số lượng ước số của nó là số lẻ


	Input Format
	Số nguyên dương N
	Constraints
	1≤N≤10^18
	Output Format
	In ra YES nếu N là số có số ước là số lẻ, ngược lại in NO
	
Sample Input 0
100
Sample Output 0
YES
Explanation 0
Số 100 có các ước 1, 2, 4, 5, 10, 20, 25, 50, 100. Vậy 100 có 9 ước là số lẻ, nên đáp án là YES.
*/
#include <stdio.h>
#include <math.h>
int uoc(int n)
{
	int cnt = 0;
	for(int i = 1; i <= sqrt(n); i++)
	{
		if(n % i == 0)
		{
			++cnt;
			if( i != n / i)
				++cnt; 
		}
	}
	return cnt;
}
int main()
{
	int n;
	scanf("%d", &n);
	if(uoc(n) % 2 != 0)
		printf("yes");
	else printf("no");
	return 0;
}