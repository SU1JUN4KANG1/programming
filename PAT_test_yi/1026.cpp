#include <iostream>
#include <iomanip>
//#include <stdio.h>
#include <math.h>

using namespace std;


int main(){


    cout.setf(ios::right); 		//设置定点形式显示
    cout.fill('0');             //设置填充方式,不足位补0

    int inp_C1 ,inp_C2;

    cin >>inp_C1 >>inp_C2;

    int buf1 =inp_C2 -inp_C1;

    int hh =buf1/100/60/60;
    cout.width(2);              //设置宽度为2，只对下条输出有用
    cout <<hh <<":";

    int mm =((buf1/100)/60)%60;
    cout.width(2);              //设置宽度为2，只对下条输出有用
    cout <<mm <<":";
/*
    int ss =buf1 /100%60;
    cout.width(2);              //设置宽度为2，只对下条输出有用
    cout <<ss;
*/
    double ss =(double) buf1/100 -mm*60 -hh*3600;
    cout.width(2);              //设置宽度为2，只对下条输出有用
    cout <<round(ss);


    return 0;
}

