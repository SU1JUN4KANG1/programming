#include <iostream>


using namespace std;

int main()
{
	//std::ios::sync_with_stdio(false);
	
	int T,K;
	cin >>T >>K;
	
	int N1 ,B,T1,N2;
	for(int i =0;i <K;i++)
	{
		cin >>N1 >>B >>T1 >>N2;
		if(T <=0)
		{
			cout << "Game Over." << endl;
			break;
		}
		if(T1 >T)
		{
			//cout <<"Not enough tokens. Total = " <<T <<"." <<endl; 
			cout << "Not enough tokens.  Total = " << T << "." << endl;
			//printf("Not enough tokens. Total = %d.\n",T);
			continue;
		}
		if((N1 <N2 &&B ==1) ||(N1 >N2 &&B ==0)) //da
		{
			T =T+T1;
			//cout <<"Win "<<T1 <<"! Total = " <<T <<"." <<endl; 
			//printf("Win %d! Total = %d.\n",T1,T);
			cout << "Win " << T1 << "!  Total = " << T << "." << endl;
			
		}
		else
		{
			T =T -T1;
			//cout <<"Lose "<<T1 <<". Total = " <<T <<"." <<endl; 
			//printf("Lose %d. Total = %d.\n",T1,T);
			cout << "Lose " << T1  << "." << "  Total = " << T << "." << endl;
			
		}
		if(T <=0)
		{
			cout << "Game Over." << endl;
			break;
		}
	}
	
		
	return 0;
	
}

 

