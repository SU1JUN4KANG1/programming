#include <iostream>
#include <algorithm>
#include <math.h>
#include <iomanip>
#include <cstring>
#include <string>
#include <map>
#include <vector>  

using namespace std;

//Ӧע������getline֮�䲻�ü�getchar,��cin���getline��ͬ 

int main(){

	string A,B;
	getline(cin,A);
	//getchar();
	getline(cin,B);
	
	int buf[300] ={0};
	//A =A +B;
	for(int i=0;i <A.size();i++)
	{
		if(buf[A[i]] ==0)
		{
			cout <<A[i];
				
		}
		buf[A[i]] =1;	
	}
	
	for(int i=0;i <B.size();i++)
	{
		if(buf[B[i]] ==0)
		{
			cout <<B[i];
					
		}
		buf[B[i]] =1;
	}
    return 0;
}





