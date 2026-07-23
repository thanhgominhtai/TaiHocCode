#include <stdio.h>
int main(){
	int n, x, k;
	scanf("%d%d%d", &n, &x, &k);
	int a[n + 1];
	for(int i = 0; i < n; i++) scanf("%d", &a[i]);
	--k;
	for(int i = n; i > k; i--)
	{
		a[i] = a[i - 1];
	}
	a[k] = x;
	for(int i = 0; i < n + 1; i++)
	{
		printf("%d ", a[i]);
	}
	return 0;
}
