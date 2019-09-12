#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main(){

    long long PTA_nu =0;
    string inp_str;

    cin >>inp_str;


    long long i =0;long long j =0;
    long long buf =0;
    
    long long P_dex =0;
    long long A_dex =-1;
    long long T_dex =0;
    
    long long P_nu =0;
    long long T_nu =0;
    
    bool statu1 =false;
    bool statu2 =true;
	
	long long str_size =inp_str.size();
	string buf_str;
	
	
	
    for(;;)
    {
   	
    	//P_nu =0;
    	//T_nu =0;
		    	
		for(long long i =A_dex +1;i <str_size;i++)
		{
			if(i ==str_size -1)
			{
				statu1 =true;
				break;
			}
			if(inp_str[i] =='A')
			{
				A_dex =i;
				break;
			}

		}
		if(statu1)
		{
			break;
		}
		
		//cout <<"kk";

		for(j =buf;j <A_dex;j++)
		{
			if(inp_str[j] =='P')
			{
				P_nu++;
				//cout <<"dd";
			}			
		}
		
		if(statu2)
		{
			for(long long m =A_dex;m <str_size;m++)
			{
				if(inp_str[m] =='T')
				{
					T_nu++;
					//cout <<"ss";
				}			
			}
			
		}
		else{
			//cout <<"sdsd";
			//cout <<buf <<"==" <<A_dex <<endl;
			for(long long n =buf;n <A_dex;n++)
			{
				//cout <<"wwww";
				if(inp_str[n] =='T')
				{
					T_nu--;				
				}	
			}			
		}

		

		
		buf =A_dex;
		PTA_nu =(PTA_nu +T_nu*P_nu)%1000000007;
		//cout <<"PTANU =" <<PTA_nu <<endl;
		statu2 =false;
		
    }    

    cout <<PTA_nu;

    return 0;

}


