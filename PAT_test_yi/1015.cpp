#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;
//超时问题和总分相同问题



class student
{
    public:
    int stu_nu;
    int stu_de;
    int stu_cai;
    int total_sco;
};


bool complare(student a,student b)
{
    if(a.total_sco !=b.total_sco) return a.total_sco >b.total_sco;
    if(a.stu_de !=b.stu_de) return a.stu_de >b.stu_de;
    return a.stu_nu <b.stu_nu;
}


int main(){

    int inp_N =0,inp_L =0,inp_H =0;
    cin >>inp_N >>inp_L >>inp_H;

    student str_stu[inp_N];

    student str_stu_1[inp_N];
    student str_stu_2[inp_N];
    student str_stu_3[inp_N];
    student str_stu_4[inp_N];



    int real_nu =0; int i =0 ,j =0;

    for(;i <inp_N;i++)
    {

        cin >>str_stu[real_nu].stu_nu >>str_stu[real_nu].stu_de >>str_stu[real_nu].stu_cai;
        str_stu[real_nu].total_sco =str_stu[real_nu].stu_de +str_stu[real_nu].stu_cai;
        if((str_stu[real_nu].stu_de <inp_L) || (str_stu[real_nu].stu_cai <inp_L))
        {
            real_nu--; //录取人数减一

        }
        real_nu++;

    }
    cout <<real_nu <<endl;


    int nu_1 =0 ,nu_2 =0 ,nu_3 =0 ,nu_4 =0;//赋值后为人数+1
    for(i =0;i <real_nu;i++)
    {
        if(str_stu[i].stu_de >=inp_H && str_stu[i].stu_cai >=inp_H)
        {
            str_stu_1[nu_1] =str_stu[i];

            nu_1++;

            continue;
        }
        if(str_stu[i].stu_de >=inp_H && str_stu[i].stu_cai <inp_H)
        {
            str_stu_2[nu_2] =str_stu[i];

            nu_2++;

            continue;
        }
        if(str_stu[i].stu_de >=str_stu[i].stu_cai)
        {
            str_stu_3[nu_3] =str_stu[i];

            nu_3++;

            continue;
        }
        else
        {
            str_stu_4[nu_4] =str_stu[i];

            nu_4++;

        }
    }



    if(nu_1)
    {

        sort(str_stu_1,str_stu_1+nu_1,complare);
        for(i =0;i <nu_1;i++)
        {
            cout <<str_stu_1[i].stu_nu <<" "<<str_stu_1[i].stu_de <<" "<<str_stu_1[i].stu_cai<<endl;

        }
    }
    if(nu_2)
    {

        sort(str_stu_2,str_stu_2+nu_2,complare);
        for(i =0;i <nu_2;i++)
        {
            cout <<str_stu_2[i].stu_nu <<" "<<str_stu_2[i].stu_de <<" "<<str_stu_2[i].stu_cai<<endl;

        }
    }
    if(nu_3)
    {

        sort(str_stu_3,str_stu_3+nu_3,complare);
        for(i =0;i <nu_3;i++)
        {
            cout <<str_stu_3[i].stu_nu <<" "<<str_stu_3[i].stu_de <<" "<<str_stu_3[i].stu_cai<<endl;

        }
    }
    if(nu_4)
    {

        sort(str_stu_4,str_stu_4+nu_4,complare);
        for(i =0;i <nu_4;i++)
        {
            cout <<str_stu_4[i].stu_nu <<" "<<str_stu_4[i].stu_de <<" "<<str_stu_4[i].stu_cai<<endl;

        }
    }


    return 0;
}

