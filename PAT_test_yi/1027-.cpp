#include <iostream>
#include <algorithm>
#include <string.h>
#include<iomanip>
#include <time.h>


using namespace std;

//运行超时

int main(){

    int inp_N =0;
    string inp_str;
    cin >>inp_N >>inp_str;




    int a[40] ={0};
    int i =0;

    int n =1;
    for(;;n++)
    {
        a[n] =2*n*n -1;
        if(a[n] >inp_N)
            break;
    }
    n--;
    int buf =inp_N -a[n];

    int k =0 ,buf1 =n;
    int m =0 ,z =0;
    for(i =0;;i++,buf1--)
    {
        k =(buf1-1)*2 +1 ;
        z =i;
        while(z)
        {
            printf(" ");
            z--;
        }
        while(k)
        {
            cout <<inp_str;
            k--;
        }
        cout <<endl;
        if(buf1 ==1)break;
    }

    buf1 =2;i--;
    for(;;buf1++,i--)
    {
        k =(buf1-1)*2 +1 ;
        m =k;z =i;
        while(z)
        {
            cout <<" ";
            z--;
        }
        while(k)
        {
            cout <<inp_str;
            k--;
        }
        cout <<endl;
        if(buf1 ==n)break;
    }
    cout <<buf <<endl;



    return 0;
}

