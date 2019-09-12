#include<iostream>

using namespace std;

int main(){

    string *str_inp =new string[80];
    int i =0,j=0;

    while(cin >>str_inp[i])
    {

        if('\n' ==cin.get())break;
        i++;
    }

    for(j =i;j >=0;j--)
    {
        cout <<str_inp[j];
        if(0 !=j)
        {
            cout <<" ";
        }
    }

    return 0;
}
