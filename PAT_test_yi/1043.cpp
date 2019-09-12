#include <iostream>
#include <string>

using namespace std;

int main(){

	int P_array =0;
	int A_array =0;
	int T_array =0;
	int e_array =0;
	int s_array =0;
	int t_array =0;
	
	string inp_str;
	cin >>inp_str;
	
	int size_str =inp_str.size();
	for(int i =0;i <size_str;i++)
	{
		if(inp_str[i] =='P')
		{
			P_array++;
		}
		else if(inp_str[i] =='T')
		{
			T_array++;
		}
		else if(inp_str[i] =='A')
		{
			A_array++;
		}
		else if(inp_str[i] =='e')
		{
			e_array++;
		}
		else if(inp_str[i] =='s')
		{
			s_array++;
		}
		else if(inp_str[i] =='t')
		{
			t_array++;
		}
	}
	
	for(;;)
	{
		if(P_array !=0)
		{
			cout <<"P";
			P_array--;
		}
		if(A_array !=0)
		{
			cout <<"A";
			A_array--;
		}
		if(T_array !=0)
		{
			cout <<"T";
			T_array--;
		}
		if(e_array !=0)
		{
			cout <<"e";
			e_array--;
		}
		if(s_array !=0)
		{
			cout <<"s";
			s_array--;
		}
		if(t_array !=0)
		{
			cout <<"t";
			t_array--;
		} 
		
		if((P_array==0)&&(A_array==0)&&(T_array==0)&&(e_array==0)&&(s_array==0)&&(t_array==0))
		{
			break;
		}
	}

    return 0;

}


