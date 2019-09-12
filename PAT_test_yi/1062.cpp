#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	//std::ios::sync_with_stdio(false);
	
	double N1,M1,N2,M2;
	double K;
	scanf("%lf/%lf %lf/%lf %lf",&N1,&M1,&N2,&M2,&K);
	//cout <<N1 <<M1 <<N2 <<M2 <<endl;
	double min,max;
	if(N1/M1 >N2/M2)
	{
		min =N2/M2;
		max =N1/M1;
	}
	else
	{
		min =N1/M1;
		max =N2/M2;;	
	}
	
	int kk =(int) K;
	//cout <<"kk" <<kk<<endl;
	int *buf =new int[kk*1000];
	int buf_nu =0;
	for(double i=1;;i++)
	{
		//cout <<"zzz =" <<i/K <<endl;
		if(i/K >min &&i/K <max)
		{
			buf[buf_nu] =i;	
			buf_nu++;
			//cout <<"ooo"<<i <<endl;
		}
		else if(i/K >=max)
		{
			break;	
		}	
	}
	if(buf_nu ==0)
	{
		cout <<endl;
		return 0;
	}
	bool flag1 =true;   //output
	bool statu1 =false;
	//cout <<"buf_nu" <<buf_nu <<endl;
	
	for(int i=0;i <buf_nu;i++)
	{
		//cout <<"dddd" <<endl;
		if(buf[i] >kk)
		{	
			//cout <<"1" <<endl;
			for(int j=2;j <=kk;j++)	//?
			{
				if(kk%j ==0 &&buf[i]%j==0)
				{
					flag1 =false;
					break;
				}
			}
		
		}
		else
		{	
			//cout <<"2" <<endl;
			for(int j=2;j <=buf[i];j++)	//?
			{	
				//cout <<"3" <<endl;
				if(kk%j ==0 &&buf[i]%j==0)
				{
					flag1 =false;
					//cout <<"5" <<endl;
					break;
				}
				//cout <<"4" <<endl;
			}
			//cout <<"4" <<endl;
		}
		//cout <<"zzzzz" <<endl;
		if(flag1)
		{
			if(statu1)
			{
				cout <<" ";
			}
			//cout <<"qqqqqqqqqqqq"<<endl;
			printf("%d/%d",buf[i],kk);
			statu1 =true;
			
		}
		flag1 =true;
		//cout <<"ffffff" <<endl;	
	} 
		
	//cout <<"sdadzc fdSa" <<endl;
	return 0;
	
}

 

