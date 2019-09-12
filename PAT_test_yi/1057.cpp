#include <iostream>

using namespace std;

int main()
{
	std::ios::sync_with_stdio(false);
		
	string inp_str;
	getline(cin,inp_str);
	
	int size =inp_str.size();
	unsigned long long count =0;
	for(int i =0;i <size;i++)
	{
		if(inp_str[i] <='z'&&inp_str[i]>='a')
		{
			//cout <<(inp_str[i] -'a') <<endl;
			count =count +(inp_str[i] -'a' +1);
		}
		else if(inp_str[i] <='Z'&&inp_str[i]>='A')
		{
			//cout <<(inp_str[i] -'A') <<endl;
			count =count +(inp_str[i] -'A' +1);
		}
	}
	
	int zero_nu =0;
	int one_nu =0;
	//cout <<count <<endl;
	unsigned long long  buf =1;
	for(;;)
	{
		if(buf >count)
		{
			break;
		}
		if(count&buf ==1)
		{
			one_nu++;
			//cout <<"ss"<<endl;
		}
		else
		{
			zero_nu++;
			//cout <<"qqqq" <<endl;
		}
		count =count >>1;
		//cout <<buf <<endl;		
	}
	cout <<zero_nu <<" " <<one_nu;
	
	return 0;
	
}

 

