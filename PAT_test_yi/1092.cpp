#include <iostream>
#include <algorithm>
#include <math.h>
#include <iomanip>
#include <cstring>
#include <string>
#include <map>
#include <vector>  

using namespace std;

class sjk_form
{
	public:
		int nu;
		int ID;
};

bool cmp(sjk_form a, sjk_form b)
{
	if(a.nu !=b.nu) return a.nu >b.nu;
	if(a.ID !=b.ID) return a.ID <b.ID;
}

int main(){

	int inp_sort, inp_city;
	cin >>inp_sort >>inp_city;
	
	sjk_form sort_nu[inp_sort];
	for(int i=0;i <inp_sort;i++)
	{
		sort_nu[i].ID =i +1;
		sort_nu[i].nu =0;
	}
	int buf1 =0;
	for(int i=0;i <inp_city;i++)
	{
		for(int j=0;j <inp_sort;j++)
		{
			cin >>buf1;
			sort_nu[j].nu +=buf1;
		}				
	}
	
	sort(sort_nu,sort_nu +inp_sort,cmp);
	
	int buf2=sort_nu[0].nu;
	cout <<sort_nu[0].nu <<endl; 
	bool statu1 =true;
	for(int i=0;i <inp_sort;i++)
	{
		if(buf2 ==sort_nu[i].nu)
		{
			if(statu1)
			{
				cout <<sort_nu[i].ID;
				statu1 =false; 
			}
			else
			{
				cout <<" " <<sort_nu[i].ID;
			}
			
		}
		else
		{
			break;
		}
	}
	
    return 0;
}





