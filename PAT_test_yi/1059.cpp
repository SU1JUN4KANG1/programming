#include <iostream>
#include <math.h>
using namespace std;

class sjk_form
{
	public:
		int ID;
		string award;
		bool check;
			
		sjk_form();
};

sjk_form::sjk_form()
{
	check =true;
}

int main()
{
	std::ios::sync_with_stdio(false);

	
	int inp_N,inp_K;
	cin >>inp_N;
	sjk_form game[inp_N +1];
	bool statu1 =true; //is sushu
	for(int i=1;i <inp_N +1;i++)
	{
		cin >>game[i].ID;
		if(i ==1)
		{
			game[i].award ="Mystery Award";
			continue;
		}
		for(int j =(int)sqrt(i);j !=1;j--)
		{
			if(i %j ==0)
			{
				statu1 =false;
				break;
			}
		}
		if(statu1)  //is sushu
		{			
			game[i].award ="Minion";
			
		}
		else
		{
			game[i].award ="Chocolate";
		}
		statu1 =true;
	}
/*	
	for(int i=1;i <inp_N+1 ;i++)
	{
		cout <<i <<" " <<game[i].award <<endl;
	}
*/
	
	cin >>inp_K;
	string inp_buf;
	bool statu2 =true; 
	for(int i=1;i <inp_K +1;i++)
	{
		statu2 =true;
		int buf2 =0;
		cin >>inp_buf;
		for(int p=0;p <4;p++)
		{
		buf2 =(inp_buf[0] -'0')*1000 +(inp_buf[1] -'0')*100 +(inp_buf[2] -'0')*10 +(inp_buf[3] -'0');
		}
		int j=1;
		for(;j <inp_N+1;j++)
		{
			if(buf2 ==game[j].ID)
			{
				if(game[j].check ==false)
				{
					cout <<inp_buf <<": " <<"Checked" <<endl;
					statu2 =false;
					break;
				}
				cout <<inp_buf <<": " <<game[j].award <<endl;
				game[j].check =false;
				statu2 =false;
				break;
				
			}
		}
		if(statu2)
		{
			cout <<inp_buf <<": " <<"Are you kidding?" <<endl;
		}
	} 
		
	return 0;
	
}

 

