#include <iostream>
#include <stdio.h>
using namespace std;

class sjk_form{
public:
    long long Galleon; //1
    long long Sickle;  //17
    long long Knut;    //29 xiao

    sjk_form();

};

sjk_form::sjk_form()
{
    Galleon =0;
    Sickle =0;
    Knut =0;
}

int main()
{
    sjk_form P,A;

    scanf("%d.%d.%d",&P.Galleon,&P.Sickle,&P.Knut);
    scanf("%d.%d.%d",&A.Galleon,&A.Sickle,&A.Knut);

    sjk_form oup;

    long long buf1 =(A.Galleon*17*29 +A.Sickle*29 +A.Knut) -(P.Galleon*17*29 +P.Sickle*29 +P.Knut);
    bool statu =false;
    if(buf1 <0)
    {
        buf1 =0 -buf1;
        statu =true;

    }
    cout <<"buf ="<<buf1 <<endl;
    oup.Galleon =buf1 /17/29;
    oup.Sickle =(buf1 /29)%17;
    oup.Knut =buf1 %29;

    if(statu ==true)
    {
        cout <<"-";
    }

    cout <<oup.Galleon <<"." <<oup.Sickle <<"." <<oup.Knut;




    //cout <<P.Galleon <<P.Sickle <<P.Knut;


    return 0;
}

