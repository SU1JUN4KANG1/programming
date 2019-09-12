#include <iostream>
#include <algorithm>
#include <math.h>
#include <iomanip>
#include <cstring>
#include <string>
#include <map>
#include <vector>  

using namespace std;

//注意丙不一定是整数,计算式需用double 

int main(){


	int my_pow, inp_X, inp_Y;
	cin >>my_pow >>inp_X >>inp_Y;
	
	int m,n;
	
	int oup_M =-1,oup_N =-1;
	for(m=1;m <10;m++)
	{
		for(n=0;n<10;n++)
		{
			if((n*10+m)*inp_X ==(abs(m*10 +n -n*10 -m) *inp_Y))
			{
				//cout <<m <<n <<endl;
				oup_M =m;
				oup_N =n;
			}
		}
	}
	
	if(oup_M ==-1)
	{
		cout <<"No Solution";
		
	}
	else
	{
		cout <<oup_M <<oup_N <<" ";
		if(my_pow >(oup_M*10 +oup_N))
		{
			cout <<"Gai ";
		}
		else if(my_pow <(oup_M*10 +oup_N))
		{
			cout <<"Cong ";
		}
		else if(my_pow ==(oup_M*10 +oup_N))
		{
			cout <<"Ping ";
		}
		
		if(my_pow >(oup_N*10 +oup_M))
		{
			cout <<"Gai ";
		}
		else if(my_pow <(oup_N*10 +oup_M))
		{
			cout <<"Cong ";
		}
		else if(my_pow ==(oup_N*10 +oup_M))
		{
			cout <<"Ping ";
		}
		
		if((double)my_pow >((double)(oup_N*10 +oup_M))/inp_Y)
		{
			cout <<"Gai";
		}
		else if((double)my_pow <((double)(oup_N*10 +oup_M))/inp_Y)
		{
			cout <<"Cong";
		}
		else if((double)my_pow ==((double)(oup_N*10 +oup_M))/inp_Y)
		{
			cout <<"Ping";
		}
	}
	
	
    return 0;
}





