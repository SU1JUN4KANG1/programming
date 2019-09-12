#include <iostream>
#include<iomanip>

using namespace std;

int main(){


    int inp_n =0;
    cin >> inp_n;

    int inp_arr[inp_n];

    int i=0;
    while(cin >>inp_arr[i])
    {
        //cout <<inp_arr[i];
        if('\n'==cin.get())
        {
            break;
        }
        i++;
    }

    int arr_0 =0 ,arr_1 =0 ,arr_2 =0 ,arr_3 =0 ,arr_4 =0;
    int arr_0_nu =0 ,arr_1_nu =0 ,arr_2_nu =0 ,arr_3_nu =0 ,arr_4_nu =0;
    for(i =0;i <inp_n;i++)
    {
        switch (inp_arr[i] %5) {
        case 0:
            if(inp_arr[i] %2 ==0)
            {
                arr_0_nu++;
                arr_0 =arr_0 +inp_arr[i];
            }

            break;
        case 1:
            if(arr_1_nu %2 ==0){
                //cout << "+"<<inp_arr[i] <<endl;
                arr_1 =arr_1 +inp_arr[i];
            }
            else{
                //cout << "-"<<inp_arr[i] <<endl;
                arr_1 =arr_1 -inp_arr[i];
            }
            arr_1_nu++;

            break;
        case 2:
            arr_2++;
            arr_2_nu++;

            break;
        case 3:
            arr_3 =arr_3 +inp_arr[i];
            arr_3_nu++;
            break;
        default:
            if(inp_arr[i] >arr_4)
            {

                arr_4 =inp_arr[i];
            }
            arr_4_nu++;

            break;
        }

    }


    if(arr_0_nu ==0)
    {
        cout <<"N ";
    }
    else
    {
        cout <<arr_0 <<" ";
    }

    if(arr_1_nu ==0)
    {
        cout <<"N ";
    }
    else
    {
        cout <<arr_1 <<" ";
    }

    if(arr_2_nu ==0)
    {
        cout <<"N ";
    }
    else
    {
        cout <<arr_2 <<" ";
    }

    if(arr_3_nu ==0)
    {
        cout <<"N ";
    }
    else
    {
        cout <<setiosflags(ios::fixed) <<setprecision(1) <<((double)arr_3 /(double)arr_3_nu) <<" ";
    }

    if(arr_4_nu ==0)
    {
        cout <<"N ";
    }
    else
    {
        cout <<arr_4;
    }







    return 0;
}

