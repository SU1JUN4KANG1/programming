#include <iostream>

using namespace std;

int nu[10]={0,1,2,3,4,5,6,7,8,9};

int main(){

    int inp_value[10];
    for(int i=0;i <10;i++)
    {
        cin >>inp_value[i];

    }

    for(int i=1;i <10;i++)
    {
        if(inp_value[i] !=0)
        {
            cout <<nu[i];
            inp_value[i]--;
            break;
        }
    }

    for(int j =0;;)
    {
        if(inp_value[j] !=0)
        {
            cout <<nu[j];
            inp_value[j] --;

        }
        else
        {
            j++;
        }
        if(j ==10)break;
    }

    return 0;
}

