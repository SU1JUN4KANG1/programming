#include <iostream>
#include <string>
#include <stdio.h>

using namespace std;



class sjk_form{

public:
    long long nu;
    long long fenzi;
    long long fenmu;

    bool statu;

    sjk_form();
};

sjk_form::sjk_form(){

    this->fenmu =1;
    this->fenzi =0;
    this->nu =0;

    statu =true;    //默认为整
}

//sjk_form buf1 ,buf2;
sjk_form count1 ,count2;

void huajian2(long long int *a1,long long int *b1)
{
    //
    //long long a =*a1;long long b =*a2;
    long long i =2;
    if(*a1 ==0)
    {
        return;
    }
    for(;i <=*b1;i++)
    {
        //cout <<"i= "<<i<<endl;
        if((*a1 %i ==0) &&(*b1 %i ==0))
        {
            //cout <<"sdsd"<<endl;
            *a1 =*a1 /i;
            *b1 =*b1 /i;
           // cout <<"a b" <<*a1 <<*b1 <<endl;
            break;
        }
    }
    if(i >*b1)
    {
        return;
    }
    huajian2(a1,b1);
}

void huajian3(long long int *a1,long long int *b1)
{
    long long i=*a1;
    if(*a1 ==0)
    {
        return;
    }
    for(;i !=1;i--)
    {
        //cout <<"s";
        if((*a1 %i ==0) &&(*b1 %i ==0))
        {
            //cout <<"sdsd"<<endl;
            *a1 =*a1 /i;
            *b1 =*b1 /i;
           // cout <<"a b" <<*a1 <<*b1 <<endl;
            break;
        }
    }
    if(*a1 ==1)
    {
        return;
    }
    if(i ==1)
    {
        return;
    }
    huajian3(a1,b1);

}

long long Gcd1(long long int a, long long int b)//a>b
{
    if (a%b != 0)
    {
        if (a > b)
        Gcd1(b, a%b);
    }
    else if (a%b == 0)
    return b;

}

void huajian4(long long int *a1,long long int *b1)
{
    if(*a1 ==0)
    {
        return;
    }
    long long k =Gcd1(*b1,*a1);
    //cout <<"k =" <<k <<endl;
    *a1 =*a1 /k;
    *b1 =*b1 /k;
}

void oup(sjk_form count)
{
    if(count.statu ==false)
    {
        cout <<"(-";
    }
    if(count.fenzi ==0 && count.nu ==0)
    {
        cout <<"0";
    }
    else if(count.fenzi ==0){
        if(count.nu)
        {
            cout <<count.nu;
        }

        //cout <<"kk";
    }
    else{
        if(count.nu)
        {
            cout <<count.nu <<" ";
        }

        cout <<count.fenzi <<"/" <<count.fenmu;
    }

    if(count.statu ==false)
    {
        cout <<")";
    }
}


int main(){

    long long a1,a2,b1,b2;

    bool huajian_statu =true;
    long long buf2;

    scanf("%lld/%lld %lld/%lld",&a1,&a2,&b1,&b2);



    if(a1 <0)
    {
        count1.statu =false;
        buf2 =0 -a1;
    }
    else
    {
        buf2 =a1;
    }
    count1.fenmu =a2;
    count1.fenzi =buf2 %a2;
    count1.nu =buf2 /a2;

    if(b1 <0)
    {
        count2.statu =false;
        buf2 =0 -b1;
    }
    else
    {
        buf2 =b1;
    }
    count2.fenmu =b2;
    count2.fenzi =buf2 %b2;
    count2.nu =buf2 /b2;

    huajian4(&count1.fenzi,&count1.fenmu);
    huajian4(&count2.fenzi,&count2.fenmu);
//------------------------  //jia
    oup(count1);
    cout <<" + ";
    oup(count2);
    cout <<" = ";

    sjk_form buf1;
    long long fenzi_ =(a1*b2 +b1*a2);
    long long fenmu_ =a2*b2;

    if(fenzi_ <0)
    {
        buf1.statu =false;
        fenzi_ =0 -fenzi_;
    }
    buf1.fenmu =fenmu_;
    buf1.fenzi =fenzi_ %fenmu_;
    buf1.nu =fenzi_ /fenmu_;

    huajian4(&buf1.fenzi,&buf1.fenmu);
    oup(buf1);
    cout <<endl;

//--------------------------jian

    oup(count1);
    cout <<" - ";
    oup(count2);
    cout <<" = ";

    sjk_form buf3;
    fenzi_ =(a1*b2 -b1*a2);
    fenmu_ =a2*b2;
    //cout <<fenzi_ <<fenmu_<<endl;

    if(fenzi_ <0)
    {
        buf3.statu =false;
        fenzi_ =0 -fenzi_;

    }
    buf3.fenmu =fenmu_;
    buf3.fenzi =fenzi_ %fenmu_;
    buf3.nu =fenzi_ /fenmu_;

    huajian4(&buf3.fenzi,&buf3.fenmu);
    oup(buf3);
    cout <<endl;

//-------------------------------

    oup(count1);
    cout <<" * ";
    oup(count2);
    cout <<" = ";

    sjk_form buf4;
    fenzi_ =a1 *b1;
    fenmu_ =a2 *b2;
    //cout <<fenzi_ <<fenmu_<<endl;

    if(fenzi_ <0)
    {
        buf4.statu =false;
        fenzi_ =0 -fenzi_;

    }
    buf4.fenmu =fenmu_;
    buf4.fenzi =fenzi_ %fenmu_;
    buf4.nu =fenzi_ /fenmu_;

    huajian4(&buf4.fenzi,&buf4.fenmu);
    oup(buf4);
    cout <<endl;



//---------------------------------

    oup(count1);
    cout <<" / ";
    oup(count2);
    cout <<" = ";

    if(b1 ==0)
    {
        cout <<"Inf";
        return 0;
    }

    sjk_form buf5;
    fenzi_ =a1 *b2;
    fenmu_ =a2 *b1;
    //cout <<fenzi_ <<fenmu_<<endl;

    if(fenmu_ <0)
    {
        fenzi_ =0 -fenzi_;
        fenmu_ =0 -fenmu_;
    }

    if(fenzi_ <0)
    {
        buf5.statu =false;
        fenzi_ =0 -fenzi_;

    }
    buf5.fenmu =fenmu_;
    buf5.fenzi =fenzi_ %fenmu_;
    buf5.nu =fenzi_ /fenmu_;

    huajian4(&buf5.fenzi,&buf5.fenmu);
    oup(buf5);
    cout <<endl;

//---------------------------------------



    return 0;
}

