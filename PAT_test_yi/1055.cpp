#include <iostream>
#include <algorithm>
using namespace std;

class sjk_form
{
public:
	string name;
	int heigh;
	
};

bool complare(sjk_form a, sjk_form b)
{
	if(a.heigh <b.heigh)
	{
		return 0;
	}
	else if(a.heigh >b.heigh)
	{
		return 1;
	}
	else if(a.name <b.name)
	{
		return 1;
	}
	else
	{
		return 0;
	}

}

int main()
{
	std::ios::sync_with_stdio(false);
		
			
	int inp_N ,inp_K;
	cin >>inp_N >>inp_K;
	
	sjk_form inp_arr[inp_N];
	for(int i =0;i <inp_N;i++)
	{
		cin >>inp_arr[i].name >>inp_arr[i].heigh;
	}
	sort(inp_arr,inp_arr+inp_N,complare);
	
	int lie =inp_N/inp_K;
	int yu  =inp_N%inp_K;
	
	//int oup_list[inp_N -1][yu +lie];
	
	int **oup_list = new int*[inp_N +1];
	for (int i = 0; i < inp_N ; i++)
	oup_list[i] = new int[yu +lie +1];
	
	int lie_buf =0;
	int index =0;
	int buf1=0;
	int buf2 =0;
	for(int i=0;i <inp_K;i++)
	{
		buf1 =0;
		if(i ==0)
		{
			lie_buf =lie +yu;
		}
		else
		{
			lie_buf =lie;
		}
		for(int j =0;j <lie_buf;j++,index++)
		{
			if(j %2 ==0)
			{
				buf1 =0 -buf1;
			}
			else
			{
				buf1 =0 -buf1;
				buf1--;
			}
			oup_list[i][lie_buf/2+buf1] =index;			
		}
	}
	
	
	
	for(int i=0;i <inp_K;i++)
	{
		if(i ==0)
		{
			lie_buf =lie +yu;
		}
		else
		{
			lie_buf =lie;
		}
		for(int j =0;j <lie_buf;j++)
		{
			cout <<inp_arr[oup_list[i][j]].name;
			if(j !=lie_buf -1)
			{
				cout <<" ";
			} 
		}
		cout <<endl;
	}
	
	return 0;
	
}

 

