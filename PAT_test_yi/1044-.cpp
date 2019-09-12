#include <iostream>
#include <string>

using namespace std;

string low[13] ={"tret","jan","feb","mar","apr","may","jun","jly","aug","sep","oct","nov","dec"};
string hei[13] ={"","tam","hel","maa","huh","tou","kes","hei","elo","syy","lok","mer","jou"};

//有两个测试点错误 

int main(){

	int inp_N =0;
	cin >>inp_N;
	cin.ignore(); 
	
	string inp_str[inp_N +1];
	int buf =0;
	for(int i =0;i <inp_N;i++)
	{
		getline(cin,inp_str[i]);
		
	}
	
	
	string a,b;
	for(int i =0;i <inp_N;i++)
	{
		if(inp_str[i][0] >='0'&&inp_str[i][0] <='9')
		{
			
			if(inp_str[i].size() ==2)
			{
				buf =(inp_str[i][0] -'0') *10 +(inp_str[i][1] -'0');
				if(buf ==13)
				{
					cout <<"tam"<<endl;
					continue;
				}
				else if(buf <13)
				{
					cout <<low[buf]<<endl;
					continue;
				}
				else if(buf >13)
				{
					cout <<hei[buf /13] <<" " <<low[buf %13] <<endl;
					continue;					
				}				
			}
			else if(inp_str[i].size() ==3)
			{
				buf =(inp_str[i][0] -'0')*100 +(inp_str[i][1] -'0')*10 +(inp_str[i][2] -'0');
				
			}
			else if(inp_str[i].size() ==1)
			{
				buf =(inp_str[i][0] -'0');
				cout <<low[buf] <<endl;
				continue;
			}
			
			cout <<hei[buf /13] <<" " <<low[buf %13] <<endl;
			continue;
		}
		else
		{
			if(inp_str[i].size() ==3)
			{
				
				for(int j =0;j <13;j++)
				{
					if(inp_str[i] ==hei[j])
					{
						buf =j*13;
						cout <<buf <<endl;
						break;
					}
					
					if(inp_str[i] ==low[j])
					{
						buf =j;
						cout <<buf <<endl;
						break;						
					}				
				}

			}
			else if(inp_str[i].size() ==7)
			{
				
				a =inp_str[i].substr(0,3);
				b =inp_str[i].substr(4,3);
				for(int j =0;j <13;j++)
				{
					if(a ==hei[j])
					{
						buf =j*13;
						
					}
				}
				
				for(int j =0;j <13;j++)
				{
					
					if(b ==low[j])
					{
						
						buf =buf +j;
						cout <<buf <<endl;
						break;						
					}
				}				
			}
			else if(inp_str[i].size() ==4)
			{
				
				cout <<0 <<endl;
				continue;
			}
			else 
			{
				return -1;
		
			}
		}
	}


    return 0;

}


