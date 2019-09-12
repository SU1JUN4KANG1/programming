#include <iostream>
#include <string>

using namespace std;

string  low[13] ={"tret","jan","feb","mar","apr","may","jun","jly","aug","sep","oct","nov","dec"};
string hei[13] ={"tret","tam","hel","maa","huh","tou","kes","hei","elo","syy","lok","mer","jou"};

int main(){

    int inp_N =0;
    cin >>inp_N;
    cin.ignore();

    string inp_str[inp_N];
    int buf =0;
    for(int i =0;i <inp_N;i++)
    {
        getline(cin,inp_str[i]);
        //cout <<inp_str[i] <<"s" <<endl;
    }

    //cout <<endl;
    string a,b;
    for(int i =0;i <inp_N;i++)
    {
        if(inp_str[i][0] >'0'&&inp_str[i][0] <'9')
        {

            if(inp_str[i].size() ==2)
            {
                buf =(inp_str[i][0] -'0') *10 +(inp_str[i][1] -'0');
                //cout <<"one" <<endl;
            }
            else if(inp_str[i].size() ==3)
            {
                buf =(inp_str[i][0] -'0')*100 +(inp_str[i][1] -'0')*10 +(inp_str[i][2] -'0');
                //cout <<"two" <<endl;
            }
            else
            {
                buf =(inp_str[i][0] -'0');
                cout <<low[buf] <<endl;
                continue;
            }

            cout <<hei[buf /13] <<" " <<low[buf %13] <<endl;
        }
        else
        {
            if(inp_str[i].size() ==3)
            {
                //cout <<"thr" <<endl;
                for(int j =0;j <13;j++)
                {
                    if(inp_str[i] ==hei[j])
                    {
                        buf =j*13;
                        cout <<buf <<endl;
                        continue;
                    }
                }

                for(int j =0;j <13;j++)
                {
                    if(inp_str[i] ==low[j])
                    {
                        buf =j;
                        cout <<buf <<endl;
                        continue;
                    }
                }
            }
            else
            {
                //cout <<"fou" <<endl;
                a =inp_str[i].substr(0,3);
                b =inp_str[i].substr(4,3);
                for(int j =0;j <13;j++)
                {
                    if(a ==hei[j])
                    {
                        buf =j*13;
                        //cout <<"dddddd";
                    }
                }

                for(int j =0;j <13;j++)
                {

                    if(b ==low[j])
                    {
                        //cout <<"ssdsd";
                        buf =buf +j;
                        cout <<buf <<endl;
                        continue;
                    }
                }
            }
        }
    }


    return 0;

}

