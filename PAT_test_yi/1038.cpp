#include <iostream>
#include <stdio.h>
using namespace std;



int main()
{
    int nu_list[101] ={0};

    int inp_N =0;
    cin >> inp_N;

    int k =0;
    for(int i =0;i <inp_N;i++)
    {

        scanf("%d",&k);
        nu_list[k]++;

    }

    int inp_K;
    cin >>inp_K;
    //int nu_1[inp_K];
    int j =0;
    for(int i =0;i <inp_K;i++)
    {

        //cin >>j;
        //cout <<nu_list[j];
        scanf("%d",&j);
        printf("%d",nu_list[j]);
        if(i !=inp_K -1)
        {
            printf(" ");
        }
    }




    return 0;
}

