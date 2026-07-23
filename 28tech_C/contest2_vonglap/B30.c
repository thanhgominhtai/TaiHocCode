/*
[Vòng lặp]. Bài 30.
Kiểm tra nhiều test
case
Bài này rất đơn giản, nhiệm vụ của bạn là kiểm tra số nhập vào là chẵn hay lẻ. Các bạn phải trả lời nhiều
trường hợp. (Bài này có nhiệm vụ cho các bạn làm quen với các bài toán mà đề bài cho nhiều test case
sau này)

	Input Format
	Dòng đầu tiên là số lượng trường hợp T; T dòng tiếp theo mỗi dòng là một số nguyên N cần kiểm tra tính
	chẵn lẻ.
	Constraints
	1<=T<=100; Các số cần kiểm tra là số không âm không quá 1000;
	Output Format
	Đối với mỗi trường hợp, các bạn in kết quả trên 1 dòng, nếu số ở trường hợp đó là chẵn thì in ra "EVEN",
	ngược lại in ra "ODD"

ample Input 0
3
166
721
665
Sample Output 0
EVEN
ODD
ODD
*/
#include <stdio.h>
int main()
{
	int n;
	printf("so luong truong hop: ");
	scanf("%d", &n);
	int s = 1;
	do 
	{
		int N;
		scanf("%d", &N);
		s++;
		if(N % 2 == 0)
		{
			printf("EVEN\n");
		}else printf("ODD\n");
	}while(s <= n);
	return 0;
}