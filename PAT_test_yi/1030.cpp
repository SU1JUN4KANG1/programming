#include <iostream>
#include <algorithm>

using namespace std;

//数据结构要用 long long //不知为啥


int main(){


    int inp_N =0 ,inp_p =0;
    cin >>inp_N >>inp_p;

    long long nu_list[inp_N];

    for(int i =0;i <inp_N;i++)
    {
        cin >>nu_list[i];
    }

    sort(nu_list,nu_list +inp_N);


    int i =0;int j =0; int k =1;
    for(j;j <inp_N;j++)
    {

        for(i =k +j;i <inp_N;i++)
        {
            if(nu_list[i] >inp_p *nu_list[j])break;

        }
        if(k <i -j)
        {
            k =i -j;
        }
    }

    cout <<k;
    return 0;
}

