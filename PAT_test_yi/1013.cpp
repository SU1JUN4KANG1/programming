#include <iostream>
#include <string.h>
#include <math.h>

using namespace std;

int main(){


    int inp_M =0 ,inp_N =0;
    int i =0,j =0,k =0,u =1;
    int sqrt_nu=0;
    bool result =true;

    //int out_nu=0;

    cin >>inp_M >>inp_N;

    int *p_arr = new int[100000];
    memset(p_arr,0,100000*4);

    for(i =2 ;;i++)
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
            if(u ==inp_N +1)
            {
                break;
            }
        }
        result =true;
    }

    for(i =inp_M ,j =1;i <=inp_N;i++,j++)
    {
        cout <<p_arr[i];
        if(j !=10 && i !=inp_N)
        {
            cout <<" ";

        }
        if(j ==10)
        {
            j =0;
            cout <<endl;
        }

    }

    delete []p_arr;
    return 0;
}

