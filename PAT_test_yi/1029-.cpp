#include <iostream>

using namespace std;

//一个错误答案,没找到

int main(){

    string inp_str1, inp_str2;
    cin >>inp_str1 >>inp_str2;

    char a[80] ={0};int err_nu =0;
    int str2_size =inp_str2.size();
    for(int i =0,j =0;j <str2_size;)
    {
        if(inp_str1[i] ==inp_str2[j])
        {
            i++;
            j++;
        }
        else{
            a[err_nu] =inp_str1[i];
            if(a[err_nu] >=97 && a[err_nu] <=122)
            {
                a[err_nu] =a[err_nu] -32;
            }
            i++;
            err_nu++;
        }
    }

    bool statu =false;
    for(int i =0;i <err_nu;i++)
    {
        for(int j =0;j <i;j++)
        {
            if(a[i] ==a[j])
            {
                statu =true;
                break;
            }
        }
        if(statu)
        {
            statu =false;
            continue;
        }
        cout <<a[i];
    }


    return 0;
}

