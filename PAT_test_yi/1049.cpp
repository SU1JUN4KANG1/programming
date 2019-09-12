#include <iostream>
#include<iomanip>
#include <math.h>

using namespace std;

int main()
{
	//std::ios::sync_with_stdio(false);
	
	int inp_N;
	cin >>inp_N;

	double inp_arr[inp_N];
	double oup_nu =0;
	for(int i =0;i <inp_N;i++)
	{
		scanf("%lf",&inp_arr[i]);
		
		oup_nu =inp_arr[i] *(i +1) *(inp_N -i) +oup_nu; 
	}
	
	printf("%0.2lf",oup_nu);

	return 0;	
}

 

