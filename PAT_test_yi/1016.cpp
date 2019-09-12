#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main(){


    string inp_str[4];

    cin >>inp_str[0] >>inp_str[1] >>inp_str[2] >>inp_str[3];



    int nu_1 =0;
    int redix =0;
    bool statu = true;
    for(;statu;)
    {
        redix =inp_str[0].find(inp_str[1]);
        if(redix == string::npos)
        {
            statu =false;
            //cout <<"false" <<endl;
        }
        else{
            //cout <<redix <<endl;
            inp_str[0][redix] =NULL;
            nu_1 ++;
        }
    }
    int nu_2 =0; redix =0;statu = true;
    for(;statu;)
    {
        redix =inp_str[2].find(inp_str[3]);
        if(redix == string::npos)
        {
            statu =false;
            //cout <<"false" <<endl;
        }
        else{
            //cout <<redix <<endl;
            inp_str[2][redix] =NULL;
            nu_2 ++;
        }
    }

    int value1 =inp_str[1][0] -'0';
    int value2 =inp_str[3][0] -'0';
    //cout <<"sd ="<<value1 <<endl;

    int oup_nu1 =0;
    for(;nu_1;nu_1--)
    {
        oup_nu1 =oup_nu1*10 +value1;
    }
    int oup_nu2 =0;
    for(;nu_2;nu_2--)
    {
        oup_nu2 =oup_nu2*10 +value2;
    }

    //cout <<"kk =";

    cout <<oup_nu1 +oup_nu2;


    return 0;
}

