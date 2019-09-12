#include <iostream>

using namespace std;
//有个格式错误,没解决
int main(){

    int inp_nu;
    cin >>inp_nu;

    string a ="1814/09/06";
    string b ="2014/09/06";


    string inp_name ,inp_day;
    string the_young_name ,the_young_day =b;
    string the_old_name ,the_old_day =a;

    int j =0;
    for(int i =0;i <inp_nu;i++)
    {
        cin >>inp_name >>inp_day;
        if(inp_day <a ||inp_day >b)
        {
            j++;
            continue;
        }

        if(inp_day >=the_old_day)
        {
            the_old_name =inp_name;
            the_old_day =inp_day;
        }
        if(inp_day <=the_young_day)
        {
            the_young_name =inp_name;
            the_young_day =inp_day;
        }

    }

    cout <<(inp_nu -j) <<" " <<the_young_name <<" " <<the_old_name;
    return 0;
}

