#include <iostream>
#include <algorithm>

using namespace std;

//设计两套算法,当前算法仍是测试点5错误,之前的版本正确过,错误原因不明 

class sjk_form
{
	public:
		int index;
		int nu;
		sjk_form();
		bool value ;
		
};

sjk_form::sjk_form()
{
	this->value =true;
}

bool complare(sjk_form a,sjk_form b)
{
	if(a.nu <b.nu)
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

	int inp_N;
	cin >>inp_N;
	
	sjk_form inp_arr[inp_N];
	
	for(int i =0;i <inp_N;i++)
	{
		cin >>inp_arr[i].nu;
		inp_arr[i].index =i;	
	}

	sort(inp_arr,inp_arr +inp_N,complare);
	
	int the_min =0; int the_max =0;
	int min_buf =0; int max_buf =0;
	bool first =true;
	for(int i =0;i <inp_N;i++)
	{
		if(i !=inp_arr[i].index)
		{
			if(first)
			{
				if(i >inp_arr[i].index)
				{
					for(int j =inp_arr[i].index;j <=i;j++)
					{
						inp_arr[j].value =false;
						
					}
					the_min =inp_arr[i].index;
					the_max =i;
				}
				else if(i <inp_arr[i].index)
				{
					for(int j =i;j <=inp_arr[i].index;j++)
					{
						inp_arr[j].value =false;
										
					}
					the_min =i;
					the_max =inp_arr[i].index;
				}
				first =false;			
			}
			else{
				if(i >inp_arr[i].index)
				{
					min_buf =inp_arr[i].index;
					max_buf =i;
				}
				else if(i <inp_arr[i].index)
				{
					min_buf =i;
					max_buf =inp_arr[i].index;				
				}
				
				if(min_buf >the_max ||max_buf <the_min)
				{
					for(int j =min_buf;j <=the_max;j++)
					{
						inp_arr[j].value =false;
						
					}
					the_min =min_buf;
					the_max =max_buf;
					continue;
				}
								
				if(max_buf >the_max)
				{
					for(int j =the_max +1;j <=max_buf;j++)
					{
						inp_arr[j].value =false;
					}
					the_max =max_buf;
				}
				if(min_buf <the_min)
				{
					for(int j =min_buf;j <the_min;j++)
					{
						inp_arr[j].value =false;
					}
					the_min =min_buf;
				}			
			}		
		}
		
	}
	
	int k =0;
	for(int i =0;i <inp_N;i++)
	{
		if(inp_arr[i].value ==true)
		{
			k++;
		}
		
	} 
	
	
	int z =0;
	cout <<k <<endl;
	 
	for(int i =0;i <inp_N;i++)
	{
		if(inp_arr[i].value ==true)
		{
			if(z !=0)
			{
				cout <<" "<<inp_arr[i].nu;
			}
			else
			{
				cout <<inp_arr[i].nu;
				
			}	
			z =1;
		}
	}
	
	cout <<endl;		
}

 
 

















/* 
int main(){

	std::ios::sync_with_stdio(false);

	int inp_N;
	cin >>inp_N;
	
	sjk_form inp_arr[inp_N];
	sjk_form inp_arr_[inp_N];
	
	for(int i =0;i <inp_N;i++)
	{
		cin >>inp_arr[i].nu;
		inp_arr[i].index =i;
		inp_arr_[i].index =i;
		inp_arr_[i].nu =inp_arr[i].nu;		
	}

	sort(inp_arr,inp_arr +inp_N,complare);
	
	int buf_nu1[inp_N] ;
	int buf_nu_1 =0;
	for(int i =0;i <inp_N;i++)
	{
		if(i ==inp_arr[i].index)
		{
			buf_nu1[buf_nu_1] =i; //index in it
			buf_nu_1++;			//index numbers
		}
	}
	
	int k =inp_N /2 +1;
	//int oup_arr[inp_N] ;
	int oup_nu =buf_nu_1;
	bool statu =true;
	for(int i =0;i <buf_nu_1;i++)
	{
		int index =buf_nu1[i];
		int value =inp_arr[index].nu;
		
		if(index >k)	//hou
		{
			
			for(int j =inp_N -1;j >index;j--)
			{
				if(value >inp_arr_[j].nu) //wrong
				{
					oup_nu--;
					buf_nu1[i] =inp_N;
					break;
				}
			}
			
		}
		else			//qian
		{
			for(int j =0;j <index;j++)
			{
				if(value <inp_arr_[j].nu)
				{
					oup_nu--;
					buf_nu1[i] =inp_N;
					break;
				}
			}
		}	
	}

	cout <<oup_nu <<endl;
	int z =0;
	for(int i =0;i <buf_nu_1;i++)
	{
		if(buf_nu1[i] !=inp_N)
		{
			if(z !=0)
			{
				cout <<" "<<inp_arr_[buf_nu1[i]].nu;
			}
			else
			{
				cout <<inp_arr_[buf_nu1[i]].nu;
			}			
			
			z =1;
		}
	}
	
    return 0;

}
*/ 
