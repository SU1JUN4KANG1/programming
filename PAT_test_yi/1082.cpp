#include <iostream>
#include <algorithm>

using namespace std;

class sjk_form
{
	public:
		string ID;
		int x;
		int y;	
		int score;
};

bool compare(sjk_form a,sjk_form b)
{
	if(a.score >b.score)
	{
		return 0;
	}
	else
	{
		return -1;
	}
}

int main(){
	
	int inp_N;
	cin >>inp_N;
	
	sjk_form inp_buf[inp_N];
	for(int i=0;i <inp_N;i++)
	{
		cin >>inp_buf[i].ID >>inp_buf[i].x >>inp_buf[i].y;
		inp_buf[i].score =inp_buf[i].x *inp_buf[i].x +inp_buf[i].y *inp_buf[i].y; 
	}
	
	sort(inp_buf,inp_buf +inp_N,compare);
	
	cout <<inp_buf[0].ID <<" " << inp_buf[inp_N -1].ID;
	
	
    return 0;
}





