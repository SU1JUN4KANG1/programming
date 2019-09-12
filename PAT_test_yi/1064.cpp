#include <iostream>
#include <math.h>
#include <algorithm>
#include <memory.h>

using namespace std;

int main()
{
	//std::ios::sync_with_stdio(false);
	
	int inp_N =0;
	cin >>inp_N;

	string buf1;
	int buf =0;
	int oup_arr[50] ={0};
	int oup_nu =0;
	for(int i=0;i <inp_N;i++)
	{
		buf =0;
		cin >>buf1;
		for(int j=0;j <buf1.size();j++)
		{
			buf =buf1[j] -'0' +buf;
			
		}
		
		oup_arr[buf]++;
		if(oup_arr[buf] ==1)
		{
			oup_nu++;
		}
	}
	
	bool statu1 =false;
	cout <<oup_nu <<endl;
	for(int i=0;i <50;i++)
	{
		if(oup_arr[i] !=0)
		{
			if(statu1)
			{
				cout <<" ";
			}
			cout <<i;
			statu1 =true;
		}
	}

	return 0; 

	
}
 

