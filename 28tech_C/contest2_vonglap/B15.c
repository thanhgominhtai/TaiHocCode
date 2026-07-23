/*[Vòng lặp]. Bài 15.
Tính giai thừa
Nhập n không âm không quá 15, tính và in ra n!

		Input Format
		Số nguyên không âm n
		Constraints
		1≤n≤15
		Output Format
		Kết quả của bài toán
		
Sample Input 0
5
Sample Output 0
120
*/
#include <stdio.h>
int main()
{
	int n;
	scanf("%d", &n);
	long long s = 1;
	for(int i = 1; i <= n; i++)
	{
		s *= i;
	}
	printf("%lld", s);
	return 0;
}