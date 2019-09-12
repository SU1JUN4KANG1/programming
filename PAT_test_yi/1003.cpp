#include<iostream>
using namespace std;
int main(){

    int n=0;

    cin >>n;
    bool statu = true;
    string a;
    int i;int j;
    int p_wz=0;int t_wz=0;
    int p_count=0;int t_count=0;
    for(i=0;i<n;i++)    //情况
    {

        statu =true;
        p_wz=0;t_wz=0;
        p_count=0;t_count=0;
        a.clear();

        cin >>a;        //输入字符串
        for(j=0;j<a.size();j++)
        {


            if(a[j]=='P'|| a[j]=='A' || a[j]=='T')
            {
                if(a[j]=='P')
                {
                    p_wz=j;
                    p_count++;
                }
                else if(a[j]=='T')
                {
                    t_wz=j;
                    t_count++;
                }
            }
            else
            {
                statu =false;
                break;
            }

        }
        if(statu ==false &&  t_count!=1 && p_count!=1)
        {
            cout<<"NO"<<endl;
            continue;
        }

        if(t_wz-p_wz-1 >=1)
        {

            if((t_wz-p_wz -1)*p_wz != a.size()-1-t_wz)
            {
                cout<<"NO"<<endl;
                continue;
            }
        }
        else
        {
            cout<<"NO"<<endl;
            continue;
        }

        cout <<"YES"<<endl;



    }

    return 0;
}
