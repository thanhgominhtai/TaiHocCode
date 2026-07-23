/*
[Hàm, Lý Thuyết Số].
Bài 5. Goldbach
conjecture
Theo Goldbach conjecture, một số nguyên dương chẵn >=4 đều có thể biểu diễn dưới dạng tổng của 2 số
nguyên tố. Cho số nguyên dương chẵn N >=4 . Hãy liệt kê các cặp số nguyên tố p, q có tổng đúng bằng
N. Ví dụ N = 6 ta có 1 cặp số nguyên tố là 3 + 3 = 6

Input Format
Dòng đầu tiên đưa vào số lượng bộ test T. Những dòng kế tiếp đưa vào các bộ test. Mỗi bộ test là một số
chẵn N.
Constraints
1≤T≤1000; 4≤N≤1000000
Output Format
Đưa ra kết quả mỗi test theo từng dòng, mỗi dòng là một cặp số thỏa mãn. Chú ý mỗi cặp chỉ liệt kê một
lần, không xét đến thứ tự.

Sample Input 0
1
10
Sample Output 0
3 7
5 5
*/
#include <stdio.h>
#include <math.h>
int nt[1000001];
void sangnt()
{
	for(int i = 0; i <= 1000000; i++)
	{
		nt[i] = 1;
	}
	nt[0] = nt[1] = 0;
	for(int i = 2; i <= sqrt(1000000); i++)
	{
		if(nt[i])
		{
			for(int j = i * i; j <= 1000000; j += i)
			{
				nt[j] = 0;
			}
		}
	}
}
int main()
{
	sangnt();
	int n;
	scanf("%d", &n);
	while(n--)
	{
		int a;
		scanf("%d", &a);
		for(int i = 2; i <= a / 2; i++)
		{
			for(int j = i; j <= a; j++)
			{
				if(nt[i] && nt[j])
				{
					if(i + j == a)
					{
						printf("%d %d\n", i, j);
					}
				}
			}
			// hoac dung cach nay khoi can vong for j
			/*
				if(nt[i] && nt[n - i] printf("%d %d), i, n - i;
			*/	
		}
	}
}