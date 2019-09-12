#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

//在键盘没坏时,第一行输入为' ',cin不能输入,所以要用getline

//一个测试点错误,

int main(){

    string inp_str1;
    string inp_str2;

    //cin >>inp_str1 >>inp_str2;
    getline(cin,inp_str1);
    getline(cin,inp_str2);

    bool flag1 =false;
    for(int i=0;i <inp_str1.size();i++)
    {
        if(inp_str1[i] =='+')
        {
            flag1 =true;
            //inp_str1.erase(i,1);
            break;
        }
    }
    //cout <<inp_str1.size() <<endl;
    //cout <<flag1 <<endl <<endl;

    int k =inp_str2.size();
    for(int i =0;i <k;i++,k =inp_str2.size())
    {
        //cout <<endl;
        //cout <<inp_str2.size() <<"  " <<i<<endl;

        //cout <<inp_str2[i] <<endl;
        if(flag1)
        {   //cout <<"sd" <<endl;
            if(inp_str2[i] <='Z' &&inp_str2[i] >='A')
            {
                //cout <<"zzzz" <<endl;
                inp_str2.erase(i,1);
                //cout <<inp_str2 <<endl;
                i--;
                continue;
            }
        }
        //cout <<"ds" <<endl;
        for(int j =0;j <inp_str1.size();j++)
        {

            if(inp_str2[i] ==inp_str1[j] ||(inp_str2[i] -32)==inp_str1[j] )
            {
                inp_str2.erase(i,1);
                //cout <<inp_str2 <<endl;
                //cout <<"kkkk" <<endl;
                i--;
                break;
            }
        }
        //cout <<endl;

    }


    cout <<inp_str2 <<endl;



    return 0;
}

