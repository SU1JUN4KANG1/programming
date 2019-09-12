#include <iostream>
#include <algorithm>
#include <math.h>
#include <iomanip>
#include <cstring>
#include <string>
#include <map>
#include <vector>  

using namespace std;




int main(){

	int inp_N;
	cin >>inp_N;
	
	int *buf_arr = new int[inp_N *2];
	memset(buf_arr,0,inp_N *2*4);
	
	int buf1 =0;
	for(int i=0;i <=inp_N;i++)
	{
		
		buf1 =i/2 +i/3 +i/5;
		//cout <<"buf1 =" <<buf1 <<endl;
		buf_arr[buf1]++;
	}
	
	int oup_nu=0;
	for(int i=0;i<inp_N *2 ;i++)
	{
		if(buf_arr[i] !=0)
		{
			oup_nu++;
		}
	}
	
	cout <<oup_nu;
	
    return 0;
}





