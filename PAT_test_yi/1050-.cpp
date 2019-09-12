#include <iostream>
#include <iomanip>
#include <math.h>
#include <algorithm>

using namespace std;

//ÓĞ¸ö²âÊÔµã´íÎó..... 

long long inp_N =0;

int value_nu =0;
int *inp_arr;
int **oup_arr; 

bool complare(int a,int b)
{
	if(a >b)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

void work(int hang,int lie,int first_h,int first_l)
{
	
	int i=first_h; int j=first_l;
	for(int k =lie-1;k >0;k--) //k wei ci shu
	{
		oup_arr[i][j] =inp_arr[value_nu];
		//cout <<"i j =" <<i <<" " <<j;
		//cout <<"   nu=" <<oup_arr[i][j]<<endl;
		j++;	
		value_nu++;	
		if(value_nu ==inp_N)break;
	}
	if(value_nu ==inp_N)return;
	
	//cout <<"2" <<endl;
	for(int k =hang-1;k >0;k--)
	{
		oup_arr[i][j] =inp_arr[value_nu];
		//cout <<"i j =" <<i <<" " <<j;
		//cout <<"   nu=" <<oup_arr[i][j]<<endl;
		i++;
		value_nu++;	
		if(value_nu ==inp_N)break;
	}
	if(value_nu ==inp_N)return;
	
	//cout <<"3" <<endl;
	for(int k=lie-1;k >0;k--)
	{
		oup_arr[i][j] =inp_arr[value_nu];
		//cout <<"i j =" <<i <<" " <<j;
		//cout <<"   nu=" <<oup_arr[i][j]<<endl;
		j--;
		value_nu++;	
		if(value_nu ==inp_N)break;
	}
	if(value_nu ==inp_N)return;
	
	//cout <<"4" <<endl;
	for(int k=hang-1;k >0;k--)
	{
		oup_arr[i][j] =inp_arr[value_nu];
		//cout <<"i j =" <<i <<" " <<j;
		//cout <<"   nu=" <<oup_arr[i][j]<<endl;
		i--;
		value_nu++;	
		if(value_nu ==inp_N)break;
	}
	if(value_nu ==inp_N)return;
	//cout <<endl;
	
}

int main()
{
	//std::ios::sync_with_stdio(false);
	
	
	
	//int oup_arr[3000][3000] ={0};
	
	
	cin >>inp_N;
	inp_arr =new int[inp_N +50];
	
	
	//int inp_arr[inp_N];
	for(int i =0;i <inp_N;i++)
	{
		//cin >>inp_arr[i];
		scanf("%d",&inp_arr[i]);
	}
	
	if(inp_N ==1)
	{
		cout <<inp_arr[0];
		return 0;
	}
	
	
	int add =0;
	int M =1;
	int N =1;
	int buf =(int) sqrt(inp_N);

	for(int i =buf;buf >0;buf--)
	{
		if(inp_N %buf ==0)
		{
			N =buf;
			M =inp_N /buf;  //da 
			break;
		}
	}
	
	
	oup_arr = new int*[M];
	for (int i = 0; i < M; i++)
		oup_arr[i] = new int[N];
	
	sort(inp_arr,inp_arr +inp_N,complare);

	
	//cout <<endl;
	//cout <<" m = n=" <<M <<" "<<N <<endl;
	 
	//work(M,N,0,0);
	//work(M-2,N-2,1,1);

	int o=0, p=0;
	int hang =M, lie =N;
	for(;;)
	{
		work(hang,lie,o,p);
		hang=hang -2;
		lie=lie -2;
		o++;
		p++;
		if(lie <=0)break;
		
	}

	//cout <<"sdsdsd"<<endl;
	for(int q =0;q <M;q++)
	{	
		
		for(int w =0;w <N;w++)
		{
			//cout <<endl;
			cout <<oup_arr[q][w];
			if(w <N -1)
			{
				cout <<" ";
			}			
		}
		cout <<endl;
	}
	
	delete []inp_arr;
	return 0;	
}

 

