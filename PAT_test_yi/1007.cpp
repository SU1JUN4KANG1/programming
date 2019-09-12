#include<iostream>
#include <math.h>
#include <vector>
#include <algorithm>
#include <string.h>



using namespace std;


int main(){

    int n;
    cin>>n;
    int i=0,j=0,k=0,u=0;
    int sqrt_nu=0;
    bool result =true;

    int out_nu=0;


    int *p_arr = new int[n];
    memset(p_arr,0,n*4);

    for(i =2 ;i<=n ;i++)
    {
        sqrt_nu =(int) sqrt(double(i));
        //sqrt_nu++;
        //cout<<"i="<<i;
        //cout<<" sqrt_nu="<<sqrt_nu;
        for(j =2 ;j<=sqrt_nu ;j++)
        {
            k=i %j;
            //cout<<" k="<<k<<endl;
            if(k ==0)
            {
                result=false;
                break;
            }
        }



        if(result ==true)
        {
            p_arr[u] =i;

            //cout<<"susu="<<*(p_arr+u)<<endl;
            u++;
        }
        result =true;
    }

    for(i=0;i<u -1;i++)
    {
        if(p_arr[i+1]-p_arr[i] ==2)
        {
            out_nu++;
        }
    }
    cout<<out_nu;

    delete []p_arr;
    return 0;
}
