#include <iostream>

using namespace std;

char ji(char a, char b)
{
	char buf = ((a -'0') +(b -'0')) %13;
	
	switch(buf)
	{
		case 10: buf ='J';break;
		case 11: buf ='Q';break;
		case 12: buf ='K';break;
		default: buf =buf +'0';
	}
	return buf;
}

char ou(char a, char b)
{
	char buf = (b -'0') -(a -'0');
	if(buf <0) buf =buf +10;
	
	return (buf +'0');
	
}



int main()
{
	std::ios::sync_with_stdio(false);

	string inp_A ,inp_B;
	cin >>inp_A >>inp_B;
	
	
	int B_size =inp_B.size();
	int A_size =inp_A.size();
	int i =B_size -1;
	int j =A_size -1;
	int weishu =1;
	char buf1 ='0';
	int the_max;
	string oup_str;
	if(i <j)
	{
		the_max =j; //ÓÉ0¿ªÊ¼ 
		oup_str =inp_A;
	}
	else
	{
		the_max =i; 
		oup_str =inp_B;
	}
	char a;
	for(;the_max >=0;i--,weishu++,j--,the_max--)
	{
		if(j <0)
		{
			break;
		}
		if(i <0)
		{
			a ='0'; 
		}
		else
		{
			a =inp_B[i];
		}

		if(weishu %2 ==1)
		{
			oup_str[the_max] =ji(inp_A[j] ,a);
		}
		else
		{
			oup_str[the_max] =ou(inp_A[j] ,a);
		}
		
		//cout <<" ="<<oup_str <<endl;
	}

	cout <<oup_str <<endl;

	return 0;	
}

 

