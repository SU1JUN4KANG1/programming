#include <iostream>
#include <math.h>
#include <algorithm>
#include <memory.h>

using namespace std;

int main()
{
	//std::ios::sync_with_stdio(false);
	
	cout.setf(ios::right);

	
	int inp_N;
	scanf("%d",&inp_N);
	getchar();
	
	int inp_buf1 ,inp_buf2;
	int *couple =new int[100001];
	for(int i=0;i <=100000 ;i++)
	{
		couple[i] =-1;
	}

	for(int i=0;i <inp_N ;i++)
	{
		scanf("%d %d",&inp_buf1,&inp_buf2);
		getchar();
		couple[inp_buf1] =inp_buf2;
		couple[inp_buf2] =inp_buf1;		
	}
	
	//cout <<"dddd";
	int inp_M;
	scanf("%d",&inp_M);
	//cout <<"inp_M =" <<inp_M <<endl;
	int inp_buf3 =0;
	int *single =new int[20000];
	for(int i=0;i <inp_M;i++)
	{
		scanf("%d",&single[i]);
		
		getchar();
		
	}
	sort(single,single +inp_M);
	
	bool statu1 =true;
	
	int oup_arr[inp_M];
	int oup_nu =0;
	for(int i=0;i <inp_M;i++)
	{
		statu1 =true;
		if( couple[single[i]] ==-1) //no in the couple list
		{
			statu1 =true;
			//cout <<"qqqq" <<endl;
			
		}
		else			//in it
		{
			for(int j=0;j <inp_M;j++)		//find couple in single list
			{
				if(single[j] ==couple[single[i]])
				{
					//cout <<"wwwwww" <<endl;
					statu1 =false;
					break;
				}
			}
		}
		if(statu1)
		{
			//cout <<"single[i]" <<single[i];
			oup_arr[oup_nu] =single[i];
			oup_nu++;
		}	
	}
	
	bool statu2 =false;
	if(oup_nu ==0)
	{
		cout <<"0"<<endl;
		//cout <<endl;
		return 0;
	}
	
	printf("%d\n",oup_nu);
	for(int i=0;i <oup_nu;i++)
	{
		if(statu2)
		{
			printf(" ");
		}
		cout.fill('0');
		cout.width(5);
		cout <<oup_arr[i];
		statu2 =true;
	}
			
	return 0;
	
}

 

