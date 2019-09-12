#include <iostream>
#include <algorithm>

using namespace std;

bool complare(char a,char b)
{
    return a>b;
}

int main(){

    int inp_nu;

    cin >>inp_nu;

    int a[4];
    a[0] = inp_nu/1000;
    a[1] = inp_nu %1000 /100;
    a[2] = inp_nu %1000 %100 /10;
    a[3] = inp_nu %10;

    if((a[0]==a[1]) &&(a[0]==a[2]) &&(a[0]==a[3]))
    {
        cout <<inp_nu <<" - " <<inp_nu <<" = " <<"0000";
        return 0;
    }   //有可能在计算中出现,现在猜测不会出现

    cout.setf(ios::right);      //设置对齐方式为右对齐
    cout.fill('0');             //设置填充方式,不足位补0


    int b[4];
    int m =0, n =0, k =0;
    for(;;)
    {
        b[0] =a[0];b[1] =a[1];b[2] =a[2];b[3] =a[3];
        sort(a,a +4,complare);
        sort(b,b +4);

        cout <<a[0] <<a[1] <<a[2] <<a[3];
        cout <<" - ";
        cout <<b[0] <<b[1] <<b[2] <<b[3];
        cout <<" = ";

        m= a[0]*1000 +a[1]*100 +a[2]*10 +a[3];
        n= b[0]*1000 +b[1]*100 +b[2]*10 +b[3];
        k =m-n;

        a[0] = k/1000;
        a[1] = k %1000 /100;
        a[2] = k %1000 %100 /10;
        a[3] = k %10;

        cout <<a[0] <<a[1] <<a[2] <<a[3] <<endl;
        if((a[0] ==6) &&(a[1] ==1) &&(a[2] ==7) &&(a[3] ==4))
        {
            break;
        }
    }

    return 0;
}

