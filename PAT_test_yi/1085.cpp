#include <iostream>
#include <algorithm>
#include <math.h>
#include <iomanip>
#include <cstring>
#include <string>
#include <map>
#include <vector>  

using namespace std;

//score比较和排位时取整数,但是加减时必须用double,以防小数点累加大于1情况 

class sjk_form
{
	public:
		string school;
		double score;
		int nu;
		sjk_form();
};

sjk_form::sjk_form()
{
	nu =0;
	score =0;
}

bool cmp(sjk_form a, sjk_form b)
{
	if((int)a.score !=(int)b.score) return (int)a.score >(int)b.score;
	if(a.nu !=b.nu) return a.nu <b.nu;
	return a.school <b.school;
}


int main(){

	

	int inp_nu_N;
	scanf("%d",&inp_nu_N);
	
	sjk_form *inp_arr= new sjk_form[100001];
	map<string , int > chgeform;
	map<string , int >::iterator index;; 
	
	double score_buf =0;
	int school_num =0;
	for(int i=0;i<inp_nu_N;i++)
	{
		char buf_ID[6] ={0};
		char buf_school[6] ={0};
		getchar();
		scanf("%s %lf %s",&buf_ID,&score_buf,&buf_school);
		
		for(int j=0;j<6;j++)
		{
			if(buf_school[j] ==0)
			{
				break;
			}
			else
			{
				if(buf_school[j] <='Z'&&buf_school[j] >='A')
				{
					buf_school[j] -=('A' -'a');
				}
			}
		}
		
		index =chgeform.find(buf_school);
		if(index ==chgeform.end()) //no found
		{
			chgeform[buf_school] =school_num;
			
			inp_arr[school_num].school =buf_school;
			inp_arr[school_num].nu++; 
			if(buf_ID[0] =='B')
			{
				inp_arr[school_num].score =(score_buf *10/15); 
			}
			else if(buf_ID[0] =='A')
			{
				inp_arr[school_num].score =(score_buf); 
			}
			else if(buf_ID[0] =='T')
			{
				inp_arr[school_num].score =(score_buf *15/10);
			}
			
			school_num++;
		}
		else
		{
			inp_arr[chgeform[buf_school]].nu++;
			if(buf_ID[0] =='B')
			{
				inp_arr[chgeform[buf_school]].score +=(score_buf *10/15); 
			}
			else if(buf_ID[0] =='A')
			{
				inp_arr[chgeform[buf_school]].score +=(score_buf); 
			}
			else if(buf_ID[0] =='T')
			{
				inp_arr[chgeform[buf_school]].score +=(score_buf *15/10);
			}			
		}
	}
	
	sort(inp_arr,inp_arr +school_num,cmp); 
	cout <<school_num <<endl;
	int buf2 =(int)inp_arr[0].score;
	int paiming =1;
	for(int i=0;i <school_num;i++)
	{
		if(buf2 ==(int)inp_arr[i].score)
		{
			cout <<paiming <<" " <<inp_arr[i].school <<" " <<(int)inp_arr[i].score <<" " <<inp_arr[i].nu <<endl;
		}
		else
		{	
			paiming =i +1;
			buf2 =inp_arr[i].score;
			cout <<i+1 <<" " <<inp_arr[i].school <<" " <<(int)inp_arr[i].score <<" " <<inp_arr[i].nu <<endl;
		}
		
	}
	
    return 0;
}





