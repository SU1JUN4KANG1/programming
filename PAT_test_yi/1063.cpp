#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	//std::ios::sync_with_stdio(false);
	
	int inp_N;
	cin >>inp_N;
	
	int a,b;
	int the_max =0;
	int buf =0;
	for(int i=0;i <inp_N;i++)
	{
		cin >>a >>b;
		buf =a*a +b*b;
		if(buf >the_max)
		{
			the_max =buf;
		}
		
	}
	double oup =sqrt((double)the_max);
	printf("%0.2lf",oup);

	return 0;
	
}

 

