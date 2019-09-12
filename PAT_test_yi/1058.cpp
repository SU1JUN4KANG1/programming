#include <iostream>

using namespace std;

class sjk_form
{
	public:
		int value;
		int answer_nu;
		int true_answer_nu;
		int an[5];
		sjk_form();
};


sjk_form::sjk_form()
{
		 value =0;
		 answer_nu =0;
		 true_answer_nu =0;
		 for(int i =0;i <5;i++)
		 {
		 	an[i] =0;
		 }
}

int main()
{
	//std::ios::sync_with_stdio(false);
		
	int inp_stu_nu;
	int inp_problem_nu;
	
	cin >>inp_stu_nu >>inp_problem_nu;
	
	sjk_form inp_pro[inp_problem_nu];
	int buf[5] ={0};
	char buf1 =0;
	
	for(int i =0;i <inp_problem_nu;i++)
	{
		//cin >>inp_pro[i].value >>inp_pro[i].answer_nu >>inp_pro[i].true_answer_nu;
		//cout <<"inp_pro[i].true_answer_nu" <<inp_pro[i].true_answer_nu <<endl;
		scanf("%d %d %d",&inp_pro[i].value,&inp_pro[i].answer_nu,&inp_pro[i].true_answer_nu); 
		for(int j =0;j <inp_pro[i].true_answer_nu;j++)
		{
			//cin >>buf1;
			scanf(" %c",&buf1);
			if(buf1 =='a')
			{
				inp_pro[i].an[0] =1;
				//cout <<"a"<<endl;
			}
			else if(buf1 =='b')
			{
				inp_pro[i].an[1] =1;
				//cout <<"b"<<endl;
			}
			else if(buf1 =='c')
			{
				inp_pro[i].an[2] =1;
				//cout <<"c"<<endl;
			}
			else if(buf1 =='d')
			{
				inp_pro[i].an[3] =1;
				//cout <<"d"<<endl;
			}
			else if(buf1 =='e')
			{
				inp_pro[i].an[4] =1;
				//cout <<"e"<<endl; 
			}
		}
		getchar();
	}
/*	
	cout <<"sdsd"<<endl;
	for(int i =0;i <inp_problem_nu;i++)
	{
		cout <<inp_pro[i].value <<inp_pro[i].answer_nu <<inp_pro[i].true_answer_nu;
		for(int j =0;j <5;j++)
		{
			if(inp_pro[i].an[j] ==1)
			{
				char k ='a' +j;
				cout <<k;
			}
		}
		cout <<endl;
	}
*/	
	//cout <<"qqqqqqq"<<endl;
	
	int stu_answer_nu =0;
	char stu_answer[5] ={0};
	bool flag1 =true;
	int score =0;
	int wrong_nu[inp_problem_nu];
	for(int i=0;i <inp_problem_nu;i++)
	{
		wrong_nu[i] =0;
	 } 
	//getchar();
	for(int stu =0;stu <inp_stu_nu;stu++) //student 
	{
		//cout <<"wwww" <<endl;
		score =0; 
		for(int i =0;i <inp_problem_nu;i++)	//problem
		{
			flag1 =true;
			scanf("(%d",&stu_answer_nu);
			//cout <<stu_answer_nu <<endl;
			if(inp_pro[i].true_answer_nu !=stu_answer_nu)
			{
				flag1 =false;
			}
			for(int j =0;j <stu_answer_nu;j++)
			{
				//cout <<"sdsds" <<endl;
				scanf(" %c",&stu_answer[j]);
				
				if(inp_pro[i].an[stu_answer[j] -'a'] !=1)
				{
					flag1 =false;
				}								
			}
			if(flag1)
			{
				score =score +inp_pro[i].value;
				//cout <<"right"<<endl;
			}
			else
			{
				wrong_nu[i]++;
			}
			//cout <<endl;
			
			if(i ==inp_problem_nu -1)
			{
				while(1)
				{
					if(getchar() =='\n')
					break;
				}
				break;
			} 
			getchar();
			getchar();
									
		}
		cout <<score <<endl;		
	}

	int the_max =0;
	for(int i=0;i <inp_problem_nu;i++)
	{
		if(the_max <wrong_nu[i])
		{
			the_max =wrong_nu[i];
		}
	}
	
	if(the_max ==0)
	{
		cout <<"Too simple";
		return 0;
	}
	
	cout <<the_max;
	for(int i=0;i <inp_problem_nu;i++)
	{
		if(the_max ==wrong_nu[i])
		{
			cout <<" " <<(i+1);
		}
	}
	
	
	return 0;
	
}

 

