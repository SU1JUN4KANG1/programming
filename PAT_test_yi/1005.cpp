#include<iostream>
#include<string>
#include <vector>
#include <algorithm>

using namespace std;

//用数组加NULL方法更简单

int main(){

    int num;
    cin >>num;

    int temp1= 0;
    vector<int> text;
    int word;
    int temp =0;

 //   vector<int>::iterator iVector2 ;

    while ( cin >> word )
    {
        text.push_back(word);
        if (cin.get() == '\n')
        {
            break;
        }
    }

    vector<int>::iterator iVector = text.begin();
    vector<int>::iterator iVector1 = text.begin();

    for(;find(text.begin(), text.end() , temp1)+1!=text.end();iVector =find(text.begin(), text.end() , temp1)+1)
    {
        //cout <<"temp_first";
        temp = *iVector;
        temp1= *iVector;

       // cout <<temp<<endl;

        while(temp != 1){
            if(temp % 2 == 0){
                temp = temp / 2;
            } else {
                temp= (3 * temp + 1) / 2;
            }
            //cout <<"temp="<<temp<<endl;
            iVector1 =find(text.begin(), text.end() , temp);
            if( iVector1 !=text.end() )
            {
                text.erase(iVector1);
            }

        }
         /*
            cout<<"iVector2=";
            iVector2 = text.begin();
            do{

                cout<< *iVector2;

                if(iVector2 !=text.end())
                {
                    cout<<" ";
                }
                iVector2++;

            }while(iVector2 !=text.end());
               cout<<endl;
        */
    }

    sort(text.begin(),text.end());
    iVector = text.end();


    do{

        iVector--;
        cout<< *iVector;

        if(iVector !=text.begin())
        {
            cout<<" ";
        }


    }while(iVector !=text.begin());

    return 0;
}
