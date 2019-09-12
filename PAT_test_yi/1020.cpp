#include <iostream>
#include <algorithm>
#include <iomanip>

using namespace std;


class goods{
public:
    double num_inp;
    double large_inp;
    double danjia;
};

bool complare(goods a,goods b)
{
    return a.danjia>b.danjia;
}

int main(){

    int inp_sort ,inp_inneed;
    cin >>inp_sort >>inp_inneed;

    goods inp_goods[inp_sort];
    //cout <<"sdsd"<<endl;
    int i =0;
    while(i <inp_sort)
    {
        cin >>inp_goods[i].num_inp;
        i++;
    }
    i =0;double buf[inp_sort];
    while(i <inp_sort)
    {
        cin >>inp_goods[i].large_inp;
        inp_goods[i].danjia = inp_goods[i].large_inp /inp_goods[i].num_inp;
        i++;
    }

    sort(inp_goods,inp_goods +inp_sort,complare);

    //cout << inp_goods[0].danjia <<endl;
    //cout << inp_goods[1].danjia <<endl;
   // cout << inp_goods[2].danjia <<endl;

    double outp_nu =0;
    for(i =0;i <inp_sort;i++)
    {
        if(inp_inneed >inp_goods[i].num_inp)
        {
            outp_nu =outp_nu +inp_goods[i].large_inp;
            inp_inneed =inp_inneed -inp_goods[i].num_inp;
        }
        else
        {
            outp_nu =outp_nu +inp_inneed *inp_goods[i].danjia;

            break;
        }

    }
    cout.setf(ios::fixed);      //设置对齐方式为右对齐
    cout.fill('0');             //设置填充方式,不足位补0

    cout <<setprecision(2) <<outp_nu;

    //cout <<setprecision(2) <<inp_value_2 /inp_large_2 <<endl;


    return 0;
}

