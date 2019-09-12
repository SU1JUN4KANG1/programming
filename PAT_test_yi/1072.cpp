#include <iostream>  
#include <algorithm>

using namespace std;

int main()
{
	int inp_N, inp_M;
	cin >>inp_N >>inp_M;
	
	string inp_str_sort[inp_M];
	for(int i=0;i <inp_M;i++)
	{
		cin >>inp_str_sort[i];
	}
	
	string name;
	int k =0;
	string buf;
	bool statu1 =true;
	int oup_stu =0;
	int oup_checknu =0;
	for(int i=0;i <inp_N;i++)
	{
		cin >>name >>k;
		statu1 =true;
		for(int j=0;j <k;j++)
		{
			cin >>buf;
			for(int n=0;n <inp_M;n++)
			{
				if(buf ==inp_str_sort[n])
				{
					if(statu1)
					{
						cout <<name <<":";
						oup_stu++;
					}
					
					oup_checknu++;										
					cout <<" " <<buf;
					statu1 =false;
					break;
				}
			}
		}
		if(statu1 ==false)
		{
			cout <<endl;
		} 
				
	}

	cout <<oup_stu <<" " <<oup_checknu <<endl;
	return 0;
}

