/*
[Vòng lặp]. Bài 10.
Kiểm tra số 2022
Nhập vào 1 dãy số có không quá 10000 số nguyên. Hãy xác định trong quá trình nhập có xuất hiện số
2022 hay không?
Gợi ý :
int n; cin >> n;
for(int i = 1; i <= n; i++){
 //Nhập 1 số, nếu số đó là 2022 thì ghi nhận lại
}
//Kiểm tra biến ghi nhận
		
		Input Format
		Dòng đầu tiên là số lượng số nguyên sẽ nhập : N Dòng thứ 2 là N số viết cách nhau một khoảng trắng.
		Constraints
		1≤N≤10000; Các số được nhập là số nguyên không quá 10^6.
		Output Format
		In YES nếu trong các số vừa nhập có số 2022, ngược lại in NO
		
Sample Input 0
4
2019 2020 2021 2022
Sample Output 0
YES
*/
#include <stdio.h>
int main()
{
	int n;
	scanf("%d", &n);
	int check = 0;
	for(int i = 1; i <= n; i++)
	{
		int a;
		scanf("%d", &a);
		if(a == 2022)
		{
			check = 1;
		}
	}
	if(check == 1)
		printf("yes");
	else 
		printf("no");
	return 0;
}