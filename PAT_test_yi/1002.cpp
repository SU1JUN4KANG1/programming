#include <iostream>
#include <string>

using namespace std;

string map[] = {"ling","yi","er","san","si","wu","liu","qi","ba","jiu","shi"};

int main()
{
    string a;
    cin >>a;
    int i=0;
    int k=0;
    int sum=0;
    int z[101];
    for(;a[i] !=NULL;i++)
    {
        sum =a[i] -'0' +sum;
    }
    do
    {
        z[k]=sum %10;
        sum = sum/10;
        k++;
    }while(sum %10 | sum/10 );
    for(;k >0;k--)
    {

        cout <<map[z[k-1]];
        if(k!=1)
        {
            cout<<" ";
        }
    }
    return 0;
}

