#include <iostream>
#include <math.h>
#include <algorithm>

using namespace std;


int main(){

    int inp_N;
    char C;

    cin >>inp_N >>C;

    for(int i =0;i <inp_N;i++)
    {
        cout <<C;
    }
    cout <<endl;

    int L =round(((double)inp_N /2));
    //cout <<L<<endl;
    for(int i =0;i <L -2;i++)
    {
        cout <<C;
        for(int j =0;j <inp_N -2;j++)
        {
            cout <<" ";
        }
        cout <<C <<endl;
    }

    for(int i =0;i <inp_N;i++)
    {
        cout <<C;
    }
    return 0;
}

