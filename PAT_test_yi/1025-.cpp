#include <iostream>
#include <algorithm>
#include <string.h>
#include<iomanip>

using namespace std;

//答案错误和运行超时,有inp_K为0情况存在,但结果不是反序也不是正序
class node_my
{
public:

    int index;

    string inp_address;
    string inp_data;
    string inp_next;
};

bool compare(node_my a,node_my b)
{
    return a.index <b.index;
}

int main(){

    string inp_first;
    int inp_N, inp_K;
    cin >>inp_first >>inp_N >>inp_K;



    node_my *node_sjk =new node_my[inp_N];

    for(int i=0;i <inp_N;i++)
    {
        cin >>node_sjk[i].inp_address >>node_sjk[i].inp_data >>node_sjk[i].inp_next;
    }


    int index_ =0;
    int k=0;
    for(string addr=inp_first;index_ <inp_N;index_++)
    {

        for(k =0;k <inp_N;k++)
        {
            if(node_sjk[k].inp_address ==addr)
            {
                node_sjk[k].index =index_;
                addr =node_sjk[k].inp_next;
                break;
            }
        }

    }
    sort(node_sjk,node_sjk +inp_N,compare);

    if(inp_K ==0)
    {
        for(int i=0;i <inp_N;i++)
        {
            cout <<node_sjk[i].inp_address <<" " <<node_sjk[i].inp_data <<" " <<node_sjk[i].inp_next <<endl;
        }
        return 0;
    }

    int i =0, j =0 ,z =inp_K -1;
    for(;;)
    {
        for(j =0,z =inp_K -1;;z--,j++)
        {
            node_sjk[i+j].index =i +z;
            if(z ==0)break;

        }
        i =i +3;
        if(i >inp_N -inp_K)
        {
            break;
        }
    }
    sort(node_sjk,node_sjk +inp_N,compare);

    for(int i =0;i <inp_N -1;i++)
    {
        node_sjk[i].inp_next =node_sjk[i +1].inp_address;

    }
    node_sjk[inp_N -1].inp_next ="-1";

    for(int i=0;i <inp_N;i++)
    {
        cout <<node_sjk[i].inp_address <<" " <<node_sjk[i].inp_data <<" " <<node_sjk[i].inp_next <<endl;
    }


    delete []node_sjk;
    return 0;
}

