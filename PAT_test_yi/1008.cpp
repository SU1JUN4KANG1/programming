#include<iostream>

using namespace std;

int main(){

    int inp_n=0,inp_m=0;
    cin >>inp_n >>inp_m;

    int a[inp_n];
    int i=0,j=0;
    while(cin >>j)
    {
        a[i] =j;
        //cout<<a[i];
        i++;
        if('\n'== cin.get())break;
    }

    if(inp_n ==1)
    {
        cout<<a[0];
        return 0;
    }

    if(inp_m >=inp_n)
    {
        inp_m = inp_m %inp_n;
    }

    int buf[inp_m];
    for(i=0;i <inp_m;i++)
    {
        buf[i]=a[inp_n -inp_m +i];
        //cout<<buf[i]<<endl;
    }

    for(i=0;i <=inp_n-3;i++) //组间,余数为i的组
    {
        a[inp_n -1 -i] =a[inp_n -1 -inp_m -i];
    }

    for(i=0;i <inp_m;i++)
    {

        a[i] =buf[i];
    }

    for(i =0;i <inp_n;i++)
    {
        cout<<a[i];
        if(i !=inp_n-1)
        {
            cout<<" ";
        }
    }

    return 0;
}
