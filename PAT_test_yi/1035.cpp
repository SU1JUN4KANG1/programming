#include <iostream>
#include <string.h>
#include <string>
#include <algorithm>


using namespace std;

int inp_N =0;
bool INS_or_MER =true; //true is INS

int compare_sjk(int data[],int exa[])
{
    int i =inp_N -1;
    for(;i >=0;i--)
    {
        if(data[i] !=exa[i])
        {
            return -1;
            break;
        }
    }
    return 0;
}

int Merge(int data[],int exa[])
{
    int i =0, k =0;
    int a =0; bool z =false;
    for(k =2;k <=inp_N;k =k*2)
    {
        for(i =0;i <inp_N;i =i +k)
        {
            if(i +k >inp_N)
            {

               sort(data +i,data +inp_N);
               break;
            }

            sort(data +i,data +i +k);
        }
        if(z)
        {
            return 0;
        }
        a =compare_sjk(data,exa);
        if(a ==0)
        {
            INS_or_MER =false;
            z =true;

        }
    }
    return 0;

}

int Insertion(int data[],int exa[])
{
    int a =0;
    int i=1;
    for(;i <inp_N;i++)
    {
        sort(data,data +i +1);
        a =compare_sjk(data,exa);

        if(a ==0)
        {
            break;
        }
    }
    sort(data,data +i +2);
    INS_or_MER =true;

    return 0;

}


int main()
{

    cin >>inp_N;

    int data1[inp_N];
    int data2[inp_N];
    for(int i =0;i <inp_N;i++)
    {
        cin >>data1[i];
        data2[i] =data1[i];
        //cout <<" data=" <<data[i];
    }

    int exa[inp_N];
    for(int i =0;i <inp_N;i++)
    {
        cin >>exa[i];
        //cout <<" exa=" <<exa[i];
    }

    Insertion(data1,exa);
    Merge(data2,exa);

    if(INS_or_MER)
    {
        cout <<"Insertion Sort" <<endl;
        for(int i =0;i <inp_N;i++)
        {
            cout <<data1[i];
            if(i !=inp_N -1)
            {
                cout <<" ";
            }
        }
    }
    else{

        cout <<"Merge Sort" <<endl;
        for(int i =0;i <inp_N;i++)
        {
            cout <<data2[i];
            if(i !=inp_N -1)
            {
                cout <<" ";
            }
        }
    }



    return 0;
}

