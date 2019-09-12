#include <iostream>

using namespace std;

int jia =0;
int yi  =0;

class sjk_form
{
	public:
	int A_hua;
	int A_han;
	
	int B_hua;
	int B_han;
	
	int A_add_B;
	
	void add();
	void game();
};

void sjk_form::add()
{
	this->A_add_B =this->A_han +this->B_han;
	//cout <<A_add_B <<endl;;
		
}

void sjk_form::game()
{
	if(this->B_hua ==this->A_hua)
	{
		return;
	}
	else if(this->A_add_B ==this->A_hua)
	{
		yi++;
	}
	else if(this->A_add_B ==this->B_hua)
	{
		jia++;
	}
}

int main()
{
	std::ios::sync_with_stdio(false);

	int inp_N =0;
	cin >>inp_N;
	
	sjk_form inp_arr[inp_N];
	for(int i =0;i <inp_N;i++)
	{
		cin >>inp_arr[i].A_han >>inp_arr[i].A_hua >>inp_arr[i].B_han >>inp_arr[i].B_hua;
		
		inp_arr[i].add();
		inp_arr[i].game();
	}

	cout <<jia <<" " <<yi;

	return 0;	
}

 

