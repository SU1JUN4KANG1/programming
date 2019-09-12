#include <iostream>
#include <algorithm>

using namespace std;

class sjk
{
public:
    int buf_nu ;
    long long buf_score;

    sjk();
};

sjk::sjk(){

    this->buf_nu =0;
    this->buf_score =0;

}

bool complare(sjk a, sjk b)
{
    return (a.buf_score > b.buf_score);
}

int main(){

    int inp_N;
    cin >>inp_N;
    sjk sjk_game[inp_N +1];
    int buf_nu ,buf_score;

    for(int i =0;i <inp_N;i++)
    {
        cin >>buf_nu >>buf_score;

        sjk_game[buf_nu].buf_nu =buf_nu;
        sjk_game[buf_nu].buf_score =sjk_game[buf_nu].buf_score +buf_score;
    }

    sort(sjk_game ,(sjk_game +inp_N +1),complare);
    cout <<sjk_game[0].buf_nu <<" " <<sjk_game[0].buf_score;

    return 0;
}

