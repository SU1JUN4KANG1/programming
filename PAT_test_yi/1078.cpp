#include <iostream>
#include <algorithm>
#include <math.h>

using namespace std;

int main() {

	char inp_char;
	cin >>inp_char;
	getchar();
	string inp_str;
	getline(cin,inp_str);
	
	char buf1;
	int nu =1;
	int buf2 =0;
	if(inp_char =='C')
	{
		buf1 =inp_str[0];
		nu =1;
		for(int i=1;i <inp_str.size();i++)
		{
			if(buf1 ==inp_str[i])
			{
				nu++;
				
			}
			else
			{
				if(nu ==1)
				{
					cout <<buf1;
				} 
				else
				{
					cout <<nu <<buf1; 
				}				
				buf1 =inp_str[i];
				nu =1;
			}
		}
		if(nu ==1)
			{
				cout <<buf1;
			} 
			else
			{
				cout <<nu <<buf1; 
			}				
			
			
	}
	else
	{
		//cout <<"zzzz"<<endl;
		for(int i=0;i <inp_str.size();i++)
		{
			if(inp_str[i] >='0' &&inp_str[i] <='9')
			{
				buf2 =inp_str[i] -'0' +buf2*10;
			}
			else
			{
				if(buf2 !=0)
				{
					for(int j=0;j<buf2;j++)
					{
						cout <<inp_str[i];
					}
				}
				else
				{
					cout <<inp_str[i];
				}
				buf2 =0;
			}
		} 
	}
	
    return 0;
}





