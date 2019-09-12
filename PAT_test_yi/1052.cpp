#include <iostream>
#include <string>

using namespace std;


string jo ="Are you kidding me? @\\/@";


int main()
{
	std::ios::sync_with_stdio(false);
	
	string hand[11];
	string eye[11];
	string mouch[11];
	
	
	
	string a;
	string b;
	string c;
	getline(cin,a);
	getline(cin,b);
	getline(cin,c);
	
	int buf1 =0; 
	int buf2 =0;
	int hand_nu =1;
	bool statu1 =false;
	bool statu2 =false;	
	for(int k =0;;)
	{
		
		//buf1 =0; buf2 =0;
		//cout <<a[k] <<endl;
		if(k ==a.size())
		{
			break;
		}
			
		if(a[k] =='[')
		{
			buf1 =k;
			statu1 =true;
		}
		if(a[k] ==']' &&statu1)
		{
			buf2 =k;
			statu1 =false;
			statu2 =true;			
		}
		
		if(statu2)
		{
			hand[hand_nu] =a.substr(buf1 +1,buf2 -buf1 -1);
			//cout <<hand[hand_nu] <<endl;
			hand_nu++;
			statu2 =false;		
			//cout <<"bb" <<endl;		
		}
		k++;
		
		//cout <<"aa" <<endl;			
	}
	//cout <<endl;

	
	int eye_nu =1;
	statu1 =false;
	statu2 =false;	
	for(int k =0;;)
	{
		
		//buf1 =0; buf2 =0;
		//cout <<a[k] <<endl;
		if(k ==b.size())
		{
			break;
		}
			
		if(b[k] =='[')
		{
			buf1 =k;
			statu1 =true;
		}
		if(b[k] ==']' &&statu1)
		{
			buf2 =k;
			statu1 =false;
			statu2 =true;			
		}
		
		if(statu2)
		{
			eye[eye_nu] =b.substr(buf1 +1,buf2 -buf1 -1);
			//cout <<eye[eye_nu] <<endl;
			eye_nu++;
			statu2 =false;		
			//cout <<"bb" <<endl;		
		}
		k++;
		
		//cout <<"aa" <<endl;			
	}
	
	//cout <<endl;
	int mouch_nu =1;
	statu1 =false;
	statu2 =false;	
	for(int k =0;;)
	{
		
		//buf1 =0; buf2 =0;
		//cout <<a[k] <<endl;
		if(k ==c.size())
		{
			break;
		}
			
		if(c[k] =='[')
		{
			buf1 =k;
			statu1 =true;
		}
		if(c[k] ==']' &&statu1)
		{
			buf2 =k;
			statu1 =false;
			statu2 =true;			
		}
		
		if(statu2)
		{
			mouch[mouch_nu] =c.substr(buf1 +1,buf2 -buf1 -1);
			//cout <<mouch[mouch_nu] <<endl;
			mouch_nu++;
			statu2 =false;		
			//cout <<"bb" <<endl;		
		}
		k++;
		
		//cout <<"aa" <<endl;			
	}
	
	int inp_N;
	cin >>inp_N;
		
	int inp_a, inp_b, inp_c, inp_d, inp_e;
	for(int q =0;q <inp_N;q++)
	{
		cin >>inp_a>> inp_b>> inp_c>> inp_d>> inp_e;
		if(inp_a>=hand_nu||inp_e>=hand_nu||inp_b>=eye_nu||inp_d>=eye_nu||inp_c>=mouch_nu||inp_a<1||inp_e<1||inp_b<1||inp_d<1||inp_e<1)
		{
			cout <<jo <<endl;
			continue;
		}
		cout <<hand[inp_a] <<"("<<eye[inp_b] <<mouch[inp_c] <<eye[inp_d] <<")"<<hand[inp_e] <<endl;
	}

	return 0;
}

 

