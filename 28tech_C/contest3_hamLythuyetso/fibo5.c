/*
[Hàm, Lý Thuyết Số].
Fibonacci 5
Kiểm tra một số có phải là số Fibonacci hay không, bạn phải trả lời nhiều trường hợp trong bài toán này.

Input Format
Dòng đầu tiên là số lượng bộ test T; T dòng tiếp theo mỗi dòng là một số nguyên dương N;
Constraints
1<=T<=100; 1<=N<=10^18
Output Format
Đối với mỗi test case in kết quả trên một dòng, nếu là số Fibonacci in YES, ngược lại in NO.


Sample Input 0
5
89
754
399
34
661
Sample Output 0
YES
NO
NO
YES
NO
*/
#include <stdio.h>
int fibo(long long n)
{
	if(n == 0 || n == 1)
		return 1;
	long long a = 1, b = 0;
	for(int i = 2; i <= 30; i++)
	{
		long long tmp = a;
		a = a + b;
		b = tmp;
		if(n == a)
			return 1;
	}
	return 0;
}
int main()
{
	int sl, n;
	scanf("%d", &sl);
	while(sl--)
	{
		scanf("%d", &n);
		if(fibo(n))
			printf("yes\n");
		else printf("no\n");
	}
	return 0;
}
