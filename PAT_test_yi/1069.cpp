#include <iostream>  
#include <algorithm>

using namespace std;

int main()
{

	int inp_M ,inp_N ,inp_S;
	cin >>inp_M >>inp_N >>inp_S;
	
	string inp_buf;
	string buf_lu[inp_M];
	int nu =0;
	int index =inp_S;
	bool statu1 =false; //cong fu
	bool statu2 =false;  //zhong jiang
	for(int i=0;i <inp_M;i++)
	{
		cin >>inp_buf;
		if(i +1 ==index)
		{
			
			for(int j=0;j <nu;j++)
			{
				if(buf_lu[j] ==inp_buf)
				{
					//statu1 =true;
					statu2 =true;
					break;
					
				}
			}
			if(statu2)
			{
				statu2 =false;
				index =i +2;
				continue;
			}
			
			cout <<inp_buf <<endl;
			index =i +1 +inp_N;
			buf_lu[nu] =inp_buf;
			nu++;
		}
		//cout <<endl;
	}
	
	if(nu ==0)
	{
		cout <<"Keep going..."<<endl;
	}

	return 0;
}

