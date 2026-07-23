/*
[Vòng lặp]. Bài 27.
Digital root
Cho số nguyên dương không âm N, ở mỗi thao tác bạn thực hiện tính tổng các chữ số của N sau đó gán
lại cho N, thao tác này được thực hiện cho tới khi N chỉ còn 1 chữ số. Ví dụ N = 278 -> 17 -> 8, vậy ta có
dạng rút gọn của 278 là 8. Nhiệm vụ của bạn là tìm dạn rút gọn của 1 số nguyên không âm N cho trước

	Input Format
	1 dòng chứa số N
	Constraints
	0<=N<=10^18
	Output Format
	In ra dạng rút gọn của N
	
Sample Input 0
999991020
Sample Output 0
3
Explanation 0
999991020 -> 48 -> 12 -> 3
*/
#include <stdio.h>
#include <math.h>
int main()
{
//	long long n;
//	scanf("%lld", &n);
//	int s = 0;
//	for(int i = 1; ; i++)
//	{
//		long long tmp;
//		tmp = n % 10;
//		s += tmp;
//		n /= 10;
//		if(n == 0 && s >= 10) 
//		{
//			n = s;
//			s = 0;
//		}
//		else if(n == 0)
//		{
//			break;
//		}
//		else if(tmp == 0)
//		{
//			continue;
//		}
//		else if(n == 0 && s < 10)
//		{
//			break;
//		}
//	}
//	printf("%d", s);

	long long n;
	scanf("%lld", &n);
	while(n >= 10)
	{
		int tong = 0;
		while(n)
		{
			tong += n % 10;
			n /= 10;
		}
		n = tong;
	}
	printf("%lld", n);
	return 0;
}