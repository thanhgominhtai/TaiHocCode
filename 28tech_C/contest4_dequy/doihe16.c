/*[Đệ Quy]. Bài 12.
Chuyển hệ thập phân
sang hệ 16.
Cho một số nguyên không âm N, hãy in ra dạng biểu diễn của N dưới hệ 16

Input Format
Số nguyên không âm N
Constraints
0≤n≤10^18
Output Format
Biểu diễn hệ 16 của số nguyên N.

Sample Input 0
995
Sample Output 0
3E3
*/
#include <stdio.h>
void he16(int n)
{
	if(n < 16)
		if(n < 9) printf("%d", n);
		else printf("%c", n + 55);
	else
		he16(n / 16);
		int c = n % 16;
		if(c < 9) printf("%d", c);
		else printf("%c", c + 55);
}
int main()
{
	int n;
	scanf("%d", &n);
	he16(n);
	return 0;
}