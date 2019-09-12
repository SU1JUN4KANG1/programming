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

	int inp_M;
	cin >>inp_M;
	
	int buf1 =0;
	int buf2 =0;
	bool statu1 =true;
	while(inp_M !=0)
	{
		inp_M--;
		statu1 =true;
		cin >>buf1;
		for(int n=1;n <10;n++)
		{
			buf2 =buf1 *buf1 *n;
			
			if(buf1 <10)
			{
				if(buf2%10 ==buf1)
				{
					cout <<n <<" " <<buf2 <<endl;
					statu1 =false;
					break;
				}
			}
			else if(buf1 >=10 &&buf1 <100)
			{
				
				if(buf2%100 ==buf1)
				{
					cout <<n <<" " <<buf2 <<endl;
					statu1 =false;
					break;
				}
			}
			else
			{
				
				if(buf2%1000 ==buf1)
				{
					cout <<n <<" " <<buf2 <<endl;
					statu1 =false;
					break;
					
				}
			}
		}
		
		if(statu1)
		{
			cout <<"No" <<endl;
		}
		
	}
	
    return 0;
}





