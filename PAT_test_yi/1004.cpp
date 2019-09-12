#include<iostream>
#include<string>

using namespace std;

class student
{
public:
    string str_name;
    string str_id;
    int    int_ccore;

};


int main(){

    int n;
    cin >>n;
    student a[n];
    int max_nu =0;
    int min_nu =0;

    int i;
    for(i =0;i<n;i++)
    {
        cin >>a[i].str_name >>a[i].str_id >>a[i].int_ccore;
    }
    for(i =1;i<n;i++)
    {
        if(a[max_nu].int_ccore < a[i].int_ccore)
        {
            max_nu=i;
        }
        if(a[min_nu].int_ccore > a[i].int_ccore)
        {
            min_nu=i;
        }
    }

    cout << a[max_nu].str_name << " " << a[max_nu].str_id<<endl;
    cout << a[min_nu].str_name << " " << a[min_nu].str_id<<endl;
    return 0;
}
