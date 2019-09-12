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
	
	
	int a =9;
	printf("%15d\n",a);

	map<int ,string> test;
	
	test[8] ="asd";
	test[7] ="www";
	test[6] ="qqq";
	test[5] ="eee";
	test[9] ="rrr";

	
	

	map<int ,string>::iterator it;
	it =test.begin();
	
	int x =5;
	while(x)
	{
		cout <<it->first <<"  " <<it->second;
		//it++;
		x--;
		
	 } 

    return 0;

}





