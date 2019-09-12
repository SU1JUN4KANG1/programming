#include <iostream>
#include <string.h>
#include <algorithm>

using namespace std;


int main(){

    string inp_str;int flag =0;

    cin >>inp_str;


    if(inp_str[0] =='-')
    {
        cout <<"-";
    }
    inp_str.erase(0,1);
    inp_str.erase(1,1);
    //cout <<endl <<inp_str <<endl;

    int E_index =inp_str.find('E');

    if(inp_str[E_index +1] =='-')
    {
        flag =1;
    }
    //cout <<flag<<endl;

    string str_buf =inp_str.substr(E_index+2);
    int size_buf =str_buf.size();
    int buf=0;
    for(int i=0;i <size_buf;i++)
    {
        buf =buf *10 +(str_buf[i] -'0');        //为E后面的数字
    }
    //cout <<buf <<endl;

    inp_str.erase(E_index);
    //cout <<inp_str <<endl;

    int size_str =inp_str.size();

    int i =0;
    if(flag ==0) //+
    {
        if(buf >=size_str -1)
        {
            i =buf -size_str +1;
            cout <<inp_str;
            while(i)
            {
                cout <<"0";
                i--;
            }
        }
        else{
            i =size_str -1 -buf;
            string k =".";
            inp_str.insert(buf +1,k);
            cout <<inp_str;

        }
    }
    else if(flag ==1)
    {
        cout <<"0.";
        buf--;
        while(buf)
        {
            cout <<"0";
            buf --;
        }
        cout <<inp_str;
    }


    return 0;
}

