#include <iostream>

using namespace std;



int main()
{
	std::ios::sync_with_stdio(false);

	int inp_stu_nu, inp_pro_nu;
	cin >>inp_stu_nu >>inp_pro_nu;
	
	int value[inp_pro_nu];
	for(int i =0;i <inp_pro_nu;i++)
	{
		cin >>value[i];
	}
	int answer[inp_pro_nu];
	for(int i =0;i <inp_pro_nu;i++)
	{
		cin >>answer[i];
	}
	
	int buf =0;
	long long score =0;
	for(int i =0;i <inp_stu_nu;i++)
	{
		score =0; 
		for(int j =0;j <inp_pro_nu;j++)
		{
			cin >>buf;
			if(buf ==answer[j])
			{
				score =score +value[j];
			}
		}
		cout <<score <<endl;
	} 
	
	
		
	return 0;
	
}

 

