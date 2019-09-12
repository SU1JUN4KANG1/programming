#include <iostream>

using namespace std;

class sjk_form
{
	public:
		int duiwu;
		int nu;
		int score;
};


int main()
{
	//std::ios::sync_with_stdio(false);

	int inp_N;
	cin >>inp_N;
	
	
	int duiwu_arr[10001] ={0};
	sjk_form inp_arr[inp_N];
	for(int i =0;i <inp_N;i++)
	{
		scanf("%d-%d %d",&inp_arr[i].duiwu,&inp_arr[i].nu,&inp_arr[i].score);
		
		duiwu_arr[inp_arr[i].duiwu] =duiwu_arr[inp_arr[i].duiwu] +inp_arr[i].score;
	}
	
	int the_max =0;
	int the_max_index =0;
	for(int i =0;i <10001;i++)
	{
		if(duiwu_arr[i] >the_max)
		{
			the_max =duiwu_arr[i];
			the_max_index =i;
		}
	}
	
	if(inp_N ==0)
	{
		cout <<endl;
		return 0;
	}
	cout <<the_max_index <<" " <<duiwu_arr[the_max_index];

	return 0;	
}

 

