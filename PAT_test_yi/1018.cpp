#include <iostream>


using namespace std;

int main(){

    int inp_N;
    cin >>inp_N;

    char a,b;
    int i =0,j =0;
    int sheng =0,ping =0, fu =0;
    int jia_C =0, jia_J =0, jia_B =0;
    int yi_C =0, yi_J =0, yi_B =0;
    while(inp_N)
    {
        inp_N--;
        cin >>a >>b;
        switch (a) {
        case 'C':
            i =1;
            break;
        case 'J':
            i =2;
            break;
        default:
            i =3;
            break;
        }

        switch (b) {
        case 'C':
            j =1;
            break;
        case 'J':
            j =2;
            break;
        default:
            j =3;
            break;
        }
        switch (i -j) {
        case -1:
            sheng++;
            if(i ==1){
                jia_C++;
            }
            else if(i ==2){
                jia_J++;
            }
            else{
                jia_B++;
            }
            break;
        case  2:
            sheng++;
            if(i ==1){
                jia_C++;
            }
            else if(i ==2){
                jia_J++;
            }
            else{
                jia_B++;
            }
            break;
                        //sheng
        case -2:
            fu++;
            if(j ==1){
                yi_C++;
            }
            else if(j ==2){
                yi_J++;
            }
            else{
                yi_B++;
            }
            break;
        case  1:
            fu++;
            if(j ==1){
                yi_C++;
            }
            else if(j ==2){
                yi_J++;
            }
            else{
                yi_B++;
            }
            break;
                        //fu
        default:
            ping++;
            break;
        }
    }
    cout <<sheng <<" " <<ping <<" " <<fu <<endl;
    cout <<fu <<" " <<ping <<" " <<sheng <<endl;
    if(jia_B >=jia_C)
    {
        if(jia_B >=jia_J)
        {
            cout <<"B ";
        }
        else
        {
            cout <<"J ";
        }

    }
    else
    {
        if(jia_C >=jia_J)
        {
            cout <<"C ";
        }
        else
        {
            cout <<"J ";
        }
    }

    if(yi_B >=yi_C)
    {
        if(yi_B >=yi_J)
        {
            cout <<"B";
        }
        else
        {
            cout <<"J";
        }

    }
    else
    {
        if(yi_C >yi_J)
        {
            cout <<"C";
        }
        else
        {
            cout <<"J";
        }
    }
    return 0;
}

