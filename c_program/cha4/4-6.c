#include <stdio.h>
int main()
{ 
	int x,y;
	printf("输入x:");
	scanf("%d",&x);
	
	if(x<1)               /* x<1 */
	{ 
		y=x;
		printf("x=%3d,   y=x=%d\n" ,x,y);
	}
	else  if(x<10)        /* 1=<x<10 */
	{ 
		y=2*x-1;
		printf("x=%d,  y=2*x-1=%d\n",x,y);
	}
	else            /* x>=10  */
	{ 
		y=3*x-11;
		printf("x=%d,  y=3*x-11=%d\n",x,y);
	}
	return 0;
}
