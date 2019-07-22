#include <stdio.h>
 
#define IN	1	
#define OUT	0	
 
/* 统计输入的行数, 单词数与字符数 */
int main()
{
	char c;
	int n1, nw, nc, state;
 
	state = OUT;
	n1 = nw = nc = 0;
 
	while ((c = getchar()) != EOF)
	{
		++nc;
		if (c == '\n')
			++n1;
 
		if (c == ' ' || c == '\n' || c == '\t')
		{
			state = OUT;
		}
		else if (state == OUT)
		{
			state = IN;
			++nw;
			putchar('\n');
			putchar(c);
		}
		else if (state == IN)
		{
			putchar(c);
		}
 
	}
 
	printf("%d %d %d \n", n1, nw, nc);
 
	return 0;
}
