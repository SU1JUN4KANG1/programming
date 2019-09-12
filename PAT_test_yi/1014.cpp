#include <iostream>
#include <string>

using namespace std;

string date[] ={"MON","TUE","WED","THU","FRI","SAT","SUN"};
int main(){

    int i =0 ,j =0 ,flag1 =0 ,flag0 =1;
    string inp_str[4];
    int a[2];

    for(i =0;i <4;i++)
    {
        cin >>inp_str[i];
    }

    int the_maxstr =inp_str[0].size();
    if(inp_str[0].size() > inp_str[1].size())
    {
        the_maxstr =inp_str[1].size();
    }
    //cout <<"str_max =" <<the_maxstr <<endl;

    for(i =0;i <the_maxstr;i++)
    {
        if(inp_str[0][i] ==inp_str[1][i])
        {
            if( (inp_str[0][i] >='A'&& inp_str[0][i] <='G') &&flag0)
            {
                a[0] = (int)inp_str[0][i];
                flag1 =1;
                flag0 =0;
                continue;
            }
            if(((inp_str[0][i] >='0'&&inp_str[0][i] <='9') || (inp_str[0][i] >='A'&&inp_str[0][i] <='N') ) &&flag1)
            {
                //cout <<"kk =" <<inp_str[0][i]<<endl;
                if( (inp_str[0][i] >='A'&&inp_str[0][i] <='N') )
                {
                    inp_str[0][i] =inp_str[0][i] -'A' +10;
                }
                if( (inp_str[0][i] >='0'&&inp_str[0][i] <='9') )
                {
                    inp_str[0][i] =inp_str[0][i] -'0';
                }
                a[1] =inp_str[0][i];

                //cout <<"sdsda1" <<a[1]<<endl;
                flag1 =0;
            }

        }
    }


    cout <<date[(a[0] -'A')] <<" ";
    cout.setf(ios::right);      //设置对齐方式为右对齐
    cout.fill('0');             //设置填充方式,不足位补0
    cout.width(2);              //设置宽度为2，只对下条输出有用
    cout <<a[1] <<":";

    the_maxstr =inp_str[2].size();
    if(inp_str[2].size() > inp_str[3].size())
    {
        the_maxstr =inp_str[3].size();
    }
    for(i =0;i <the_maxstr;i++)
    {
        if(inp_str[2][i] ==inp_str[3][i])
        {

            if((inp_str[2][i] >='A' && inp_str[2][i] <='Z') || ( inp_str[2][i] >='a' &&inp_str[2][i] <='z'))
            {

                a[0] =i;
                cout.width(2);              //设置宽度为2，只对下条输出有用
                cout <<a[0];
                return 0;
            }
        }
    }





    return 0;
}

