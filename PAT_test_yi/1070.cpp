#include <iostream>  
#include <algorithm>

using namespace std;

int main()
{

	int inp_N;
	cin >>inp_N;
	
	double inp_arr[inp_N];
	for(int i=0;i <inp_N;i++)
	{
		cin >>inp_arr[i];
	}
	
	sort(inp_arr,inp_arr +inp_N);
	
	int oup_nu =inp_arr[0];
	for(int i=1;i <inp_N;i++)
	{
		oup_nu =oup_nu +inp_arr[i];
		oup_nu =oup_nu/2;
	}
	
	cout <<(int)oup_nu;
	return 0;
}

