#include <iostream>
#include <algorithm>
#include <iomanip>

using namespace std;




int main(){

    string inp_nu;

    cin >>inp_nu;

    int str_size =inp_nu.size();
    int nu[10] ={0};
    //cout <<nu[1] <<nu[2];
    for(int i=0;i <str_size;i++)
    {
        switch (inp_nu[i]) {
        case '0':
            nu[0]++;
            break;
        case '1':
            nu[1]++;
            break;
        case '2':
            nu[2]++;
            break;
        case '3':
            nu[3]++;
            break;
        case '4':
            nu[4]++;
            break;
        case '5':
            nu[5]++;
            break;
        case '6':
            nu[6]++;
            break;
        case '7':
            nu[7]++;
            break;
        case '8':
            nu[8]++;
            break;
        case '9':
            nu[9]++;
            break;
        }
    }

    for(int i =0;i <10;i++)
    {
        if(nu[i] !=0)
        {
            cout <<i <<":" <<nu[i] <<endl;
        }
    }


    return 0;
}

