#include <iostream>

using namespace std;

class sjk_form
{
public:
	int index;
	int data;
	int next;	
	
	int statu;   //0[-max ,0)  1[0,k] 2(k,+max)
};


int main() {

	int inp_first_dex;
	int inp_dex_nu;
	int inp_K;
	
	cin >>inp_first_dex >>inp_dex_nu >>inp_K;
	
	sjk_form *inp_list =new sjk_form[100001];
	int inp_buf;
	for(int i=0;i <inp_dex_nu;i++)
	{
		cin >>inp_buf;
		cin >>inp_list[inp_buf].data >>inp_list[inp_buf].next;
		inp_list[inp_buf].index =inp_buf;
		if(inp_list[inp_buf].data <0)
		{
			inp_list[inp_buf].statu =0;
		}
		else if(inp_list[inp_buf].data >inp_K)
		{
			inp_list[inp_buf].statu =2;
		}
		else
		{
			inp_list[inp_buf].statu =1;
		}
	}
	
	int buf_index =inp_first_dex;
	bool statu1 =false;
	for(int i=0;i <inp_dex_nu;i++)			//find 0 
	{
		
		if(inp_list[buf_index].statu ==0)
		{
			if(statu1)
			{
				printf("%05d\n",inp_list[buf_index].index);
			}
			printf("%05d %d ",inp_list[buf_index].index,inp_list[buf_index].data);
			statu1 =true;
		}
		buf_index = inp_list[buf_index].next;
		if(buf_index ==-1)
		{
			break;
		}
	}
	
	buf_index =inp_first_dex;
	for(int i=0;i <inp_dex_nu;i++) //find 1
	{
		if(inp_list[buf_index].statu ==1)
		{
			
			if(statu1)
			{
				printf("%05d\n",inp_list[buf_index].index);
			}
			//printf("%05d\n",inp_list[buf_index].index);			
			printf("%05d %d ",inp_list[buf_index].index,inp_list[buf_index].data);
			statu1 =true;
			
		}
		buf_index = inp_list[buf_index].next;
		if(buf_index ==-1)
		{
			break;
		}
	}
	
	buf_index =inp_first_dex;
	for(int i=0;i <inp_dex_nu;i++)			//find 0 
	{
		
		if(inp_list[buf_index].statu ==2)
		{
			
			if(statu1)
			{
				printf("%05d\n",inp_list[buf_index].index);
			}
			//printf("%05d\n",inp_list[buf_index].index);			
			printf("%05d %d ",inp_list[buf_index].index,inp_list[buf_index].data);
			statu1 =true;
			
		}
		buf_index = inp_list[buf_index].next;
		if(buf_index ==-1)
		{
			break;
		}
	}
	
	printf("-1\n");

    return 0;
}





