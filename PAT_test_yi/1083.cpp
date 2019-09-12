#include <iostream>
#include <algorithm>
#include <math.h>

using namespace std;



int main(){
	
	int oup_nu[10002] ={0};
	
	int inp_N;
	cin >>inp_N;
	
	int buf =0;
	for(int i=1;i <inp_N +1;i++)
	{
		cin >>buf;
		
		//cout <<abs(buf -i) <<endl;
		oup_nu[abs(buf -i)]++;
		
	}
	
	for(int i=10001;i >=0;i--)
	{
		if(oup_nu[i] !=0 &&oup_nu[i] !=1)
		{
			cout <<i <<" " <<oup_nu[i] <<endl;
		}
	}
	
    return 0;
}





