#include <iostream>


using namespace std;

int main()
{
	//std::ios::sync_with_stdio(false);
	
	int M,N,A,B,buf;
	cin >>M >>N >>A >>B >>buf;
	
	int **inp_arr =new int*[M];
	for(int i =0;i <M;i++)
	{
		inp_arr[i] =new int[N];
	}
	
	int buf1 =0;
	for(int i =0;i <M;i++)
	{
		for(int j =0;j <N;j++)
		{
			cin >>buf1;
			if(buf1 >=A &&buf1 <=B)
			{
				buf1 =buf;
			}
			inp_arr[i][j] =buf1;
		}
	}
		
	cout.setf(ios::right); 	
	cout.fill('0'); 
	for(int i =0;i <M;i++)
	{
		for(int j =0;j <N;j++)
		{
			cout.width(3);    
			cout <<inp_arr[i][j];
			if(j !=N-1)
			{
				cout <<" ";
			}
		}
		cout <<endl;
		
	}
	
		
	return 0;
	
}

 

