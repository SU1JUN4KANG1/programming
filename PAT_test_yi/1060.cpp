#include <iostream>
#include <algorithm> 
using namespace std;

bool complare(int a,int b)
{
	return (a >b);
}

int main()
{
	//std::ios::sync_with_stdio(false);
	
	int inp_N;
	scanf("%d\n",&inp_N);
	
	int inp_arr[inp_N];
	for(int i=0;i <inp_N;i++)
	{

		scanf("%d",&inp_arr[i]);

	}
	sort(inp_arr ,inp_arr+inp_N);

	int oup_E =0;

	
	if(inp_arr[0] >inp_N)
	{
		cout <<inp_N <<endl;
		return 0;
	}
	else
	{
		for(int i=inp_N-1 ;i>=0 ;i--)
		{
  			if(inp_arr[i]<=inp_N-i)
			  {
  				oup_E = inp_N-i-1;
  				break;
	  			}
  		}

		cout <<oup_E;
	}
	
	
		
	return 0;
	
}

 

