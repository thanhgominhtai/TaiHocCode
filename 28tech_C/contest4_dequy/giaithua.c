/*
[Đệ Quy]. Bài 5. Tính
giai thừa Tính n giai thừa bằng đệ quy.

nput Format
Số nguyên dương N.
Constraints
0≤n≤10;
Output Format
Kết quả của N!

Sample Input 0
6
Sample Output 0
720
*/
#include <stdio.h>
int gt(int n)
{
	if(n == 0)
	{
		return 1;
	}
	else 
	{
		return n * gt(n - 1);
	}
}
int main()
{
	int n;
	scanf("%d", &n);
	printf("%d", gt(n));
	return 0;
}