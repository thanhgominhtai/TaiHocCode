/*
[Hàm, Lý Thuyết Số].
Bài 28. Số Lộc Phát
Một số được gọi là “lộc phát” nếu chỉ có các chữ số 0,6,8. Nhập vào một số nguyên hãy kiểm tra xem đó
có phải số lộc phát hay không. Nếu đúng in ra 1, sai in ra 0.

	Input Format
	Số nguyên n
	Constraints
	0≤n≤10^18
	Output Format
	In ra 1 nếu n là số lộc phát, ngược lại in 0

Sample Input 0
60806
Sample Output 0
1
*/
int slp(long long n)
{
	int s;
	while(n)
	{
		s = n % 10;
		if(s != 0 && s != 6 && s != 8)
			return 0;
		n /= 10;
	}
	return 1;
}
int main()
{
	long long n;
	scanf("%lld", &n);
	printf("%d", slp(n));
	return 0;
}
