#include <iostream>


using namespace std;

int main()
{
	//std::ios::sync_with_stdio(false);
			
	int inp_N;
	cin >>inp_N;
		
	string inp_buf;
	double count =0;
	double the_average =0;
	int dian =0;
	bool flag =true;
	double buf1 =0;
	double buf2 =0;
	int nu =0;
	int dian_index =0;
	bool statu1 =true;  //>0
	
	for(int i=0;i <inp_N;i++)
	{
		cin >>inp_buf;
		int size =inp_buf.size();
		dian =0;
		dian_index =0;
		buf1 =0;
		buf2 =0;
		flag =true; 
		statu1 =true;
		for(int j =0;j <size;j++)
		{
			//cout <<"one"<<endl;
			if(inp_buf[j] =='.'&&j!=0)
			{
				dian++;
				dian_index =j;//cout <<"oneone"<<endl;
				continue;
				
			}
			else if(inp_buf[j] =='-'&&j==0)
			{
				statu1 =false;
				if(size ==1)
				{
					flag =false;
					break;
				}
				continue;
			}
			else if(inp_buf[j] <'0'||inp_buf[j] >'9')
			{
				flag =false;//cout <<"twotwo"<<endl;
				break;
								
			}
			else if(dian ==2)
			{
				flag =false;//cout <<"3333333"<<endl;
				break;				
			}
			else if(dian !=0 &&j -dian_index ==3)
			{
				flag =false;
				break;
			}
			
			if(dian ==0) //dian qian
			{
				buf1 =(inp_buf[j] -'0') +buf1*10;
				//cout <<"buf1 =" <<buf1 <<endl;
			}
			else
			{		
				double uu =0.1;		
				int kk =j -dian_index;
				while(kk >1)
				{
					uu =0.1*uu;
					kk--;
				}

				//cout <<uu <<" "<<inp_buf[j];
				buf2 =uu*(inp_buf[j] -'0') +buf2; 
				//cout <<"buf2 =" <<buf2 <<endl;
			}
			//cout <<"two"<<endl;
		}
		
		if(flag)
		{			
			count =buf1 +buf2;
			if(count >1000)
			{
				cout <<"ERROR: " <<inp_buf <<" is not a legal number"<<endl;
				continue;
			}
			if(statu1 ==false)
			{
				count =0 -count;
			}
			
			the_average =count +the_average;
			nu++;
		} 
		else
		{
		 	cout <<"ERROR: " <<inp_buf <<" is not a legal number"<<endl;
		}
	}
	
	if(nu ==0)
	{
		cout <<"The average of 0 numbers is Undefined";
	}
	else 
	{
		double oup =the_average /nu;
		printf("The average of %d number is %0.2f",nu,oup);
	}
	
	return 0;
	
}

 

