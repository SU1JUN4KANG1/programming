#include <iostream>
#include <algorithm>
#include <math.h>

using namespace std;

//测试点3错误,找不出原因 

int main(){
	
	int inp_N;
	cin >>inp_N;
	
	string str_buf;
	int size_str =0;
	bool statu1 =false;	//illegal
	bool statu2 =false;	//shu zi
	bool statu3 =false;	//zi fu
	for(int i=0;i <inp_N;i++)
	{
		
		 statu1 =false;	//no perfet
		 statu2 =false;	//shu zi
		 statu3 =false;	//zi fu
		
		//cin >>str_buf;
		getchar();
		getline(cin,str_buf);
		size_str =str_buf.size();
		
		if(size_str <6)
		{
			cout <<"Your password is tai duan le." <<endl;
			continue;
		}
		else
		{
			for(int j=0;j <size_str;j++)
			{
				
				if(str_buf[j] >='0' && str_buf[j] <='9')
				{
					statu2 =true;
				}
				else if(str_buf[j] >='A' &&str_buf[j] <='Z')
				{
					statu3 =true;
				}
				else if(str_buf[j] >='a' &&str_buf[j] <='z')
				{
					statu3 =true;
				}
				else if(str_buf[j] =='.')
				{
					
				}
				else
				{
					cout <<"Your password is tai luan le." <<endl;
					statu1 =true;
					break;
				}
			}
			
			if(statu1) 
			{
				statu1 =false;
				continue;
			}
			
			if(statu3 ==true &&statu2 ==false)
			{
				cout <<"Your password needs shu zi." <<endl;
				continue;
			}
			
			if(statu3 ==false &&statu2 ==true)
			{
				cout <<"Your password needs zi mu." <<endl;
				continue;
			}
			
			if(statu3 ==false &&statu2 ==false)
			{
				return -1;			
			}
			
			if(statu3 ==true &&statu2 ==true)
			{
				cout <<"Your password is wan mei." <<endl;
				continue;
			}
			
		} 
		
		
	}
	
    return 0;
}





