#include <stdio.h>
 
 
int main()
{
	char c;
	int flag = 0; //空格标识
 
	while ((c = getchar()) != EOF)
	{
		if (c == ' ')
		{
			if (flag == 0)
			{
				putchar(c);
			}
			flag = 1;
		}
		else
		{
			putchar(c);
			flag = 0;
		}
	}
 
	return 0;
}
