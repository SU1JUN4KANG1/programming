#include <iostream>
#include <algorithm>
#include <math.h>
#include <iomanip>
#include <cstring>
#include <string>
#include <map>

using namespace std;

class sjk_form
{
	public:
		string ID;
		int P_score;
		int M_score;
		int F_score;
		int G_score;
		
		bool P_statu;
		
		sjk_form();	
		void counter();
};

sjk_form::sjk_form()
{
	P_statu =false;
	P_score =-1;
	M_score =-1;
	F_score =-1;
	G_score =-1;
}

void sjk_form::counter()
{
	if(M_score >F_score)
	{
		G_score =round( ((double)M_score) /10*4 + ((double)F_score)/10*6);
			     
	}
	else
	{
		G_score =(int) F_score;
	}
}

bool complare(sjk_form a, sjk_form b)
{

	if(a.G_score !=b.G_score) return a.G_score>b.G_score;
	if(a.ID !=b.ID) return a.ID<b.ID;
	
}

int main(){


	map<string , int >mapstring;
	
	int inp_P_nu, inp_M_nu, inp_N_nu;
	//cin >>inp_P_nu >>inp_M_nu >>inp_N_nu;
	scanf("%d %d %d",&inp_P_nu,&inp_M_nu,&inp_N_nu);
	
	sjk_form inp_arr[inp_P_nu +1];
	int stu_nu =0; 
	
	
	char *buf_s =new char[20];
	int inp_buf1 =0;
	for(int i=0;i<inp_P_nu;i++)
	{ 
		
		memset(buf_s,0,20); 
		getchar();		
		scanf("%s %d",buf_s,&inp_buf1);
		inp_arr[stu_nu].ID  = buf_s; 
						
		if(inp_buf1 >=200)
		{
			mapstring[buf_s] =stu_nu;
			
			inp_arr[stu_nu].ID = buf_s;
			inp_arr[stu_nu].P_score =inp_buf1;
			
			stu_nu++;
			
			
		}
	}
	
	//cout <<"stu_nu= " <<stu_nu <<endl;
	
	string inp_str;
	int buf_score;
	map<string , int >::iterator l_it;;
	for(int i=0;i<inp_M_nu;i++)
	{
		//cin >>inp_str >>buf_score;
		memset(buf_s,0,20);
		getchar();
		scanf("%s %d",buf_s,&buf_score);
		inp_str =buf_s;
		
		l_it =mapstring.find(inp_str);
		if(l_it !=mapstring.end())
		{
			inp_arr[mapstring[inp_str]].M_score =buf_score;
		}
		
/*		for(int j=0;j <stu_nu;j++)
		{
			if(inp_str ==inp_arr[j].ID)
			{
				inp_arr[j].M_score =buf_score;
				break;
			}
		}
		*/
	}
	
	
	for(int i=0;i<inp_N_nu;i++)
	{
		memset(buf_s,0,20);
		getchar();
		scanf("%s %d",buf_s,&buf_score);
		inp_str =buf_s;
		
		l_it =mapstring.find(inp_str);
		if(l_it !=mapstring.end())
		{
			inp_arr[mapstring[inp_str]].F_score =buf_score;
		}
		
		
		//cin >>inp_str >>buf_score;
	/*	
		for(int j=0;j <stu_nu;j++)
		{
			if(inp_str ==inp_arr[j].ID)
			{
				inp_arr[j].F_score =buf_score;
				break;
			}
		}
		*/
	}
	

	
	for(int i=0;i <stu_nu;i++)
	{
		inp_arr[i].counter();
	}
		
	sort(inp_arr,inp_arr +stu_nu,complare);

	for(int i=0;i <stu_nu;i++)
	{
		if(inp_arr[i].P_statu ==false &&inp_arr[i].G_score >=60)
		{
			//cout <<inp_arr[i].ID <<" " <<inp_arr[i].P_score <<" " <<inp_arr[i].M_score <<" " <<inp_arr[i].F_score <<" " <<inp_arr[i].G_score;
			//cout <<endl;
			printf("%s %d %d %d %d\n",inp_arr[i].ID.c_str(),inp_arr[i].P_score,inp_arr[i].M_score,inp_arr[i].F_score,inp_arr[i].G_score);
		}
		
	}
	
    return 0;
}





