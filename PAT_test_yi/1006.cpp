#include<iostream>

using namespace std;


int main(){

    int int_n;
    cin>>int_n;

    int B_nu=int_n/100;
    int S_nu=int_n%100/10;
    int gewei=int_n%10;
    int i=0;

    //cout<<B_nu<<S_nu<<gewei<<endl;

    for(i=0;i<B_nu;i++)
    {
        cout<<"B";
    }

    for(i=0;i<S_nu;i++)
    {
        cout<<"S";
    }

    for(i=1;i <=gewei;i++)
    {
        cout<<i;
    }

    return 0;
}
