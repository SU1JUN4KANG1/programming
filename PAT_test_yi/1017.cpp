#include <iostream>


using namespace std;

int main(){

    string inp_A;
    int inp_B =0;

    cin >>inp_A >>inp_B;

    int str_size =inp_A.size();
    int i =0;
    int oup_nu =0;
    int buf =0;

    if(str_size ==1)
    {
        cout <<((inp_A[i] -'0'))/inp_B <<" ";
        cout <<((inp_A[i] -'0'))%inp_B;
        return 0;
    }

    for(;str_size;str_size--)
    {
        oup_nu =((inp_A[i] -'0') +buf *10)/inp_B;
        buf =((inp_A[i] -'0') +buf *10)%inp_B;
        if(!(i ==0 && oup_nu ==0))
        {
            cout <<oup_nu;

        }
        i++;
    }

    cout <<" " <<buf;


    return 0;
}

