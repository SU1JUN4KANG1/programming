#include <iostream>

using namespace std;

int main() {

	int inp_N;
	cin >>inp_N;
	
	int oup_nu[100];
	char buf1,buf2;
	getchar();
	int nu =0;
	for(int i=0;i <inp_N *4;i++)
	{
		scanf("%c-%c",&buf1,&buf2);
		getchar();
		if(buf2 =='T')
		{
			oup_nu[nu] = buf1 -'A' +1;
			nu++;
		}	
		
	}
	cout <<"nu =" <<nu <<endl;
	for(int i=0;i <inp_N;i++)
	{
		cout <<oup_nu[i];
	}
	
    return 0;
}





