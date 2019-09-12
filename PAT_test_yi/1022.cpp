#include <iostream>


using namespace std;




int main(){

    int inp_A =0, inp_B =0, inp_D;
    cin >>inp_A >>inp_B >>inp_D;

    int buf =inp_A +inp_B;
    int result[32];
    int i =0;
    for(;;i++)
    {

        result[i] =(buf %inp_D);
        buf =buf /inp_D;




        if(buf ==0)break;

    }
    while(i >=0)
    {
        cout <<result[i];
        i--;
    }

    return 0;
}

