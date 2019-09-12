
/*
#include <iostream>
using namespace std;
int main(){
    int a,b,index = 0;
    while(cin >> a >> b) {
        if(index != 0 && b != 0){
            cout << " ";
        }
        if(b != 0) {
            cout << a * b << " " << b - 1 ;
            index ++;
        }
    }
    if(index == 0){
        cout << "0 0";
    }
}


*/









/*
#include<iostream>

using namespace std;

int main(){


    int *int_inp =new int[1001];
    int nu=0;
    int i =0,j =0;

    while( cin >>int_inp[nu])
    {
        nu++;//为多项式个数*2

        if(int_inp[nu -1] ==0 && int_inp[nu -2] !=0 && nu%2==0)
        {
            nu =nu -2;
        }

        if(cin.get()=='\n')
        {
            break;
        }
    }

    if(int_inp[0]==0 && int_inp[1]==0 &&int_inp[2]==0)
    {
        cout <<"0 0";
        return 0;
    }


    for(i=0,j=0;j < nu/2;j++)
    {
        if(int_inp[i] ==0 && int_inp[i+1] ==0)
        {

        }
        else{

            int_inp[i] =int_inp[i] *int_inp[i +1];
            int_inp[i+1]--;
        }


        //cout <<int_inp[i] <<int_inp[i+1] <<endl;
        i =i +2;
    }

    for(i =0;i <nu;i++)
    {

        cout <<int_inp[i];
        if(i !=nu-1)
        {
            cout <<" ";
        }

    }
    return 0;
}
*/
