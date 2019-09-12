#include <iostream>
#include <algorithm>
#include <math.h>

using namespace std;

//遇到超时问题,字符使用+=会快很多,贼无奈 

int main(){

	
	
	std::ios::sync_with_stdio(false);
	
	string inp_str;
	int inp_nu;
	
	cin >>inp_str >>inp_nu;
	char buf1;
	char buf2;
	
	for(int i=0;i <inp_nu -1;i++)
	{
		string oup_str;
		buf1 =inp_str[0];
		buf2 ='0';
		//oup_str.clear();
		int size =inp_str.size();
		for(int j=0;j <size;j++)
		{
			if(buf1 ==inp_str[j])
			{
				buf2++;
			}
			else
			{
				oup_str +=buf1;
				oup_str +=buf2;
				buf1 =inp_str[j];
				buf2 ='1';
			}
		}
		
	
		oup_str +=buf1;
		oup_str +=buf2;;
		
		

		//inp_str.clear();
		inp_str =oup_str;
		
		//cout <<"oup_str=" <<oup_str <<endl;
	}
	
	cout <<inp_str <<endl;
	
    return 0;
}





