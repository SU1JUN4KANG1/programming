#include <iostream>
#include <algorithm>

using namespace std;
//答案错误有一个
int quan[17] ={7,9,10,5,8,4,2,1,6,3,7,9,10,5,8,4,2};
char m[11] ={'1','0','X','9','8','7','6','5','4','3','2'};

int main(){

    int inp_N;
    cin >>inp_N;

    string inp_IDNU;
    //int flag[inp_N] ={0};

    int nu_1 =0;
    bool statu =false;
    int i ,j;
    int sum =0;

    for( i =0;i <inp_N;i++)
    {
        cin >>inp_IDNU;

        for( j =0;j <(18 -1);j++)
        {
            if((inp_IDNU[j] >'9' || inp_IDNU[j] <'0'))
            {

                statu =true;
                break;
            }
        }
        if(!statu)
        {
            for(int j =0;j <(18 -1);j++)
            {
                sum =sum +(inp_IDNU[j] -'0')*quan[j];
            }
            if(m[sum %11] !=inp_IDNU[17])
            {
                statu =true;
            }
        }

        sum =0;
        if(statu)
        {
            nu_1++;
            cout <<inp_IDNU <<endl;
        }


    }
    if(nu_1 ==0)
    {
        cout <<"All passed";
    }



    return 0;
}

