#include <iostream>


using namespace std;



int main()
{
	std::ios::sync_with_stdio(false);
		
	int inp_N;
	cin >>inp_N;
	int inp_arr[inp_N];
	for(int i =0;i <inp_N;i++)
	{
		cin >>inp_arr[i];
	}
	
	long long count =0;
	for(int i =0;i <inp_N;i++)
	{
		for(int j=0;j <inp_N;j++)
		{
			if(i ==j)
			{
				continue;
			}
			else
			{
				count =inp_arr[i]*10 +inp_arr[j] +count; 
			}
		}
	}
	
	cout <<count;
	return 0;
	
}

 

