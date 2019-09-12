#include <iostream>


using namespace std;


int main(){
	
	int inp_A ,inp_B;
	cin >>inp_A >>inp_B;
	
	int oup_nu[10] ={0};
	int buf =inp_A *inp_B;
	int i =0;
	for(i=0;;i++)
	{
		oup_nu[i] =buf %10;
		buf =buf /10;
		
		if(buf ==0)
		{
			break;
		}
	}
	
	bool statu =false;
	for(int j=0;j <=i;j++)
	{
		if(statu ||oup_nu[j] !=0)
		{
			cout <<oup_nu[j];
			statu =true;
		}
	
		
	}
	
	
    return 0;
}





