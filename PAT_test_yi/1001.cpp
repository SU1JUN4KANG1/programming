#include <iostream>

using namespace std;

int main()
{

    int i_num =0;
    cin >>i_num;

    while(i_num >1000)
    {
        return -1;
    }
    int i_count =0;
    while(i_num != 1)
    {
        if(i_num %2 ==0)
        {
            i_num =i_num /2;
        }
        else
        {
            i_num =(i_num *3 +1)/2;
        }
        i_count++;
    }

    cout <<i_count<<endl;
    return 0;


}

