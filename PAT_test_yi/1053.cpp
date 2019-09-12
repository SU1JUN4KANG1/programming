#include <iostream>
#include <string>
//#inclide <stdio.h>
using namespace std;

int main()
{
	//std::ios::sync_with_stdio(false);
	
	double inp_N  ,inp_D;
	double inp_E;
	cin >>inp_N >>inp_E >>inp_D;
	
	double possible_kz =0;
	double mastbe_kz =0;;
	
	int inp_K =0;
	double inp_buf =0;
	int low_nu =0;
	for(int i =0;i <inp_N;i++)
	{
		low_nu =0;
		inp_buf =0;
		cin >>inp_K;
		
		for(int j =0;j <inp_K;j++)
		{
			cin >>inp_buf;
			if(inp_buf <inp_E)
			{
				low_nu++;
			}
		}
		if(inp_K >inp_D)
		{
			if(low_nu *2 >inp_K)mastbe_kz++;
		}
		else
		{
			if(low_nu *2 >inp_K)possible_kz++;
		}
	}
	
	//cout <<mastbe_kz <<" " <<possible_kz;
	double oup_possible =possible_kz/inp_N *100;
	double oup_mastbe =mastbe_kz/inp_N *100;
	
	printf("%0.1f",oup_possible);
	cout <<"% ";
	printf("%0.1f",oup_mastbe);
	cout <<"%";

	return 0;
}

 

