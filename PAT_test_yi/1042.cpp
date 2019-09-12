#include <iostream>
#include <string>

using namespace std;

int main(){

	string inp_str;
	getline(cin,inp_str);
	
	//cout <<inp_str;
	
	int acsii_list[26] ={0};
	int size =inp_str.size();
	
	for(int i =0;i <size;i++)
	{
		if((inp_str[i] >='a' &&inp_str[i] <='z')) 
		{
			acsii_list[inp_str[i] -'a']++;
			//cout <<inp_str[i] <<" "<<acsii_list[inp_str[i] -'a'] <<endl;
			//cout <<"y";
		}
		else if((inp_str[i] >='A' &&inp_str[i] <='Z'))
		{
			acsii_list[inp_str[i] -'A']++;

			//cout <<inp_str[i] <<" "<<acsii_list[inp_str[i] -'A'] <<endl;
			//cout <<"y";
		}
		else
		{
			//cout <<"n";
		}				
	}

	
	int the_max_dex =0;
	int the_max_nu =acsii_list[0];
	for(int i =1;i <26;i++)
	{
		if(acsii_list[i] >the_max_nu)
		{
			the_max_dex =i;
			the_max_nu =acsii_list[i];
		}
				
	}
	
	char a ='a' +the_max_dex;
	cout <<a <<" " << the_max_nu;
	
    return 0;

}


