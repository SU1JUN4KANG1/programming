#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	//std::ios::sync_with_stdio(false);
	
	string inp_str;
	int int_N;
	cin >>inp_str >>int_N;
	
	string buf_str;
	int nu =0;
	getchar();
	for(;;)
	{
		//cin >>buf_str;
		getline(cin,buf_str);		
		if(buf_str =="#")
		{
			return 0;
		}
		else if(buf_str ==inp_str)
		{
			cout << "Welcome in"<<endl;
			return 0;
		}
		else if(buf_str !=inp_str)
		{
			cout <<"Wrong password: "<<buf_str <<endl;
		}
		
		nu++;
		if(nu ==int_N)
		{
			cout <<"Account locked";
			return 0;
		}
	}

	return 0;
	
}

 

