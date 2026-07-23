/*
[Xâu kí tự cơ bản].
Bài 8. 28tech và Tèo
Tèo là một người ghét 28tech vì cho rằng 28tech cho quá nhiều bài tập khó làm anh ta phải đau đầu. Vì
thế anh ta ghét tất cả những chữ cái xuất hiện trong từ "28tech", Tèo muốn nhờ bạn xóa hết những kí tự
xuất hiện trong từ "28tech" khỏi xâu kí tự S, bạn hãy giúp Tèo nhé. Nếu xâu S sau khi xóa không còn kí
tự nào bạn phải in ra EMPTY

nput Format
Dòng duy nhất chứa xâu S
Constraints
1<=len(S)<=10000
Output Format
In ra xâu S sau khi xóa hoặc in ra EMPTY nếu xâu S trở thành rỗng.

Sample Input 0
hSbc7eeh4ti8eSADte0
Sample Output 0
Sb74iSAD0
Sample Input 1
28tech28techtech28
Sample Output 1
EMPTY
*/
#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main()
{
	char a[100]; scanf("%s", a);
	int dem = 0;
	for(int i = 0; i < strlen(a); i++)
	{
		if(a[i] == '2' || a[i] == '8' || a[i] == 't' || a[i] == 'e' || a[i] == 'c' || a[i] == 'h')
		{
			++dem;
		}
		else printf("%c", a[i]);
		
	}
	if(dem = strlen(a))
	{
		printf("empty");
	}
}