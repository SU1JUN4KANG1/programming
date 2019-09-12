#include <iostream>

using namespace std;
//坑,cin在流中获取数据时,太大则获取不正常 
int main() {

	string inp_N;
	long long inp_nu1 =0;
	long long inp_nu2 =0;
	string buf_str1; 
	string buf_str2;
	getline(cin,inp_N);
	
	getline(cin,buf_str1);//cout <<"zzz=" <<buf_str1 <<endl;

	getline(cin,buf_str2);//cout <<"zzz=" <<buf_str2 <<endl;

	int size_1 =buf_str1.size();
	int size_2 =buf_str2.size();
	
	int N_xize =inp_N.size();
	//cout <<"N_xize" <<N_xize<<endl;
	int buffer =10;
	int buf1 =inp_nu1;
	int buf2 =inp_nu2;
	int add_flag =0;
	int oup_arr[N_xize +1];
	for(int i=0;i <N_xize+1;i++)
	{
		oup_arr[i] =0;
	}
	int buf3 =0;
	int buf4 =0;
	for(int i=0;i <N_xize +1;i++)
	{
		oup_arr[i] =0;
	}
	//cout <<"qqqqqq";
	for(int i=0;i <N_xize+1;i++)
	{
		//cout <<"wwwwwwwwww"<<endl;
		if(size_1 -1-i >=0)
		{
			buf1 =buf_str1[size_1 -1-i] -'0';
		}
		else
		{
			buf1 =0;
		}
		//cout <<"buf1=" <<buf1 <<endl;
		if(size_2 -1-i >=0)
		{
			buf2 =buf_str2[size_2 -1-i] -'0';
		}
		else
		{
			buf2 =0;
		}
		//cout <<"buf2=" <<buf2 <<endl;		
		buf3 =buf2 +buf1 +add_flag;
		//cout <<"buf3 " <<buf3 <<endl;
		add_flag =0;
		if(i !=N_xize)
		{
			if(inp_N[N_xize -i -1] -'0' ==0)
			{
				buf4 =10; 
			}
			else
			{
				buf4 =inp_N[N_xize -i -1] -'0';
			} 
		}
		else
		{
			buf4 =10;
		}
		
		if(buf3 >=buf4)
		{
			buf3 =buf3 -buf4;
			add_flag =1;
		}
		oup_arr[i] =buf3;
		//cout <<"oup_arr[i]" <<oup_arr[i] <<endl;
		//cout <<add_flag <<endl;
	}
	

	bool statu1 =false;
	for(int i=N_xize;i >=0;i--)
	{
		if(statu1 ||oup_arr[i] !=0)	
		{
			cout <<oup_arr[i];
			statu1 =true;
		}		
	}
	if(statu1 ==false)
	{
		cout <<"0";
	}
	
    return 0;
}





