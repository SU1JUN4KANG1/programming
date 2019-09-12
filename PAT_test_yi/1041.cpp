#include <iostream>

using namespace std;

class sjk_class
{
public:
    string nu;
    int test_l;//测试
    int test_2;//考试
};
int main() {

    int inp_N = 0;
    cin >> inp_N;

    sjk_class inp_list[inp_N];

    for (int i =0;i <inp_N;i++)
    {
        cin >>inp_list[i].nu >>inp_list[i].test_l >>inp_list[i].test_2;

    }

    int inp_M =0;
    cin >>inp_M;
    int list2[inp_M];
    for(int i =0;i <inp_M;i++)
    {
        cin >>list2[i];
    }

    for(int i =0;i <inp_M;i++)
    {
        for(int j =0;j <inp_N;j++)
        {
            if(inp_list[j].test_l ==list2[i])
            {
                cout <<inp_list[j].nu <<" " <<inp_list[j].test_2 <<endl;
            }
        }
    }

}
