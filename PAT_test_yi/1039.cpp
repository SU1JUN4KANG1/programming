#include <iostream>
#include <stdio.h>
using namespace std;



int main()
{
    int list[2000] ={0};
    int it_has_nu =0;
    int it_not_has =0;
    bool statu =false; //it has;

    string str1 ,str2;
    cin >>str1;
    cin >>str2;

    for(int i =0;i <str1.size();i++)
    {
        list[str1[i]]++;
    }

    for(int i =0;i <str2.size();i++)
    {

        if(list[str2[i]] <=0)
        {
            it_not_has++;
            statu =true;
        }
        else
        {
            list[str2[i]]--;
            it_has_nu++;
        }
    }

    if(statu)
    {
        cout <<"No "<<it_not_has;
    }
    else{


        cout <<"Yes "<<(str1.size() -it_has_nu);
    }

    return 0;
}

