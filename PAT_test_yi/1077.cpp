#include <iostream>
#include <algorithm>
#include <math.h>

using namespace std;

int main() {

	int inp_N,inp_M;
	cin >>inp_N >>inp_M;
	
	double tea_nu =0;
	double stu_nu[inp_N -1];
	int leg_nu =0;
	double G2 =0; 
	double oup_nu =0;
	bool statu1 =false;
	for(int i=0;i <inp_N;i++)
	{
		G2 =0;
		cin >>tea_nu;
		statu1 =false;
		leg_nu =0;
		for(int j=0;j <inp_N -1;j++)
		{
			
			cin >>stu_nu[leg_nu];
			//cout <<"ddd" <<endl;
			
			if(stu_nu[leg_nu] <0 ||stu_nu[leg_nu] >inp_M)
			{
				//statu1 =true;
			}
			else
			{
				
				//cout <<stu_nu[leg_nu] <<endl;
				leg_nu++;
			}					
		}
		//cout <<"leg_nu =" <<leg_nu <<endl;
	/*	
		for(int j=0;j <leg_nu;j++)
		{
			cout <<stu_nu[j] <<" ";
			//G2 =stu_nu[j] +G2;
		}
		cout <<endl;
		*/
		sort(stu_nu,stu_nu +leg_nu);
	/*	for(int j=0;j <leg_nu;j++)
		{
			cout <<stu_nu[j] <<" ";
			//G2 =stu_nu[j] +G2;
		}
		cout <<endl;
		*/
		stu_nu[0] =0;
		stu_nu[leg_nu -1] =0;
		
		for(int j=0;j <leg_nu;j++)
		{
			//cout <<stu_nu[j] <<" ";
			G2 =stu_nu[j] +G2;
			//cout <<"G2 =" <<G2 <<" ";
		}
	/*	cout <<endl;
		cout <<"G2 =" <<G2 <<endl;*/
		G2 =G2 /(leg_nu -2);
		oup_nu = (G2 +tea_nu) /2;
		//printf("%0.0lf\n",oup_nu);
		cout <<round(oup_nu) <<endl;
	}
	
    return 0;
}





