#include <iostream>
#include <algorithm>
#include <math.h>

using namespace std;

bool panduan(string inp_nu)
{
	int str_size =inp_nu.size();
	for(int i=0;i<str_size;i++)
	{
		if(inp_nu[str_size -1 -i] !=inp_nu[i])
		{
			return true;
		}
		
	}
	return false;
	
	
}

int main(){
	
	string inp_nu;
	cin >>inp_nu;
	
	string buf_str =inp_nu;
	//cout <<endl;
	int flag =0;
	int buf1 =0;
	for(int i=0;;i++)
	{
		
		if(i ==10)
		{
			cout <<"Not found in 10 iterations."<<endl;
			break;
		}
		
		if(panduan(inp_nu))	
		{
			for(int j =0;j <buf_str.size();j++)
			{
				buf_str[j] =inp_nu[buf_str.size() -1 -j];
				
			}
			
			//cout <<"zzz= "<<buf_str <<endl;
			//cout <<"kkk= "<<inp_nu <<endl;
			//cout <<buf_str <<" + " << inp_nu;
			cout <<inp_nu <<" + " << buf_str;
			for(int j=buf_str.size() -1;j >=0;j--)
			{
				buf1 =buf_str[j] + inp_nu[j] +flag -'0' -'0';
				flag =0;
				if(buf1 >=10)
				{
					buf1 =buf1 -10;
					flag =1;
				}
				inp_nu[j] =buf1 +'0';
			}
			if(flag ==1)
			{
				inp_nu ='1' +inp_nu;
				buf_str ='1' +buf_str; 
				flag =0; 
			}
			cout <<" = "<<inp_nu <<endl;
		}
		else
		{
			cout <<inp_nu <<" is a palindromic number."; 
			break;
		}
		

	}
	
    return 0;
}





