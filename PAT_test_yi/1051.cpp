#include <iostream>
#include <cmath>

using namespace std;

//必须注意,四舍五入问题,编程时-0.0049,四舍五入为-0.00,所以必须置0
 


int main()
{
	std::ios::sync_with_stdio(false);
	
	double r1 ,p1 ,r2 ,p2;
	cin >>r1 >>p1 >>r2 >>p2; 
	
	//cout <<endl <<r1 <<p1 <<r2 <<p2 <<endl; 
	double a, b, c, d;
	a =r1 *cos(p1);
	b =r1 *sin(p1);
	
	c =r2 *cos(p2);
	d =r2 *sin(p2);

	double buf1, buf2;
	buf1 =a*c -d*b;
	buf2 =a*d +c*b;
	
	if( buf1 < 0.005  && buf1 > -0.005){
		buf1 = 0;
	}
	if( buf2 < 0.005  && buf2 > -0.005){
		buf2 = 0;
	}
	
	
	if(buf2 <0)
	{
		buf2 =0 -buf2;
		printf("%0.2f-%0.2fi",buf1,buf2);
	}
	else
	{
		printf("%0.2f+%0.2fi",buf1,buf2);
	}
	
	return 0;
}

 

