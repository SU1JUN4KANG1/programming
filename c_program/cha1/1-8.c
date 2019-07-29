#include <stdio.h>
 
 
int main()
{
	int n1 = 0;	//空格
	int n2 = 0;	//制表符
	int n3 = 0; //换行符
 
	char c;
 
	while ((c = getchar()) != EOF)
	{
		if (c == ' ')
			n1++;
		
		if (c == '\t')
			n2++;
 
		if (c == '\n')
			n3++;
	}
 
	printf("\n空格计数=%d,制表符计数=%d,换行计数=%d\n", n1, n2, n3);
 
	return 0;
}
