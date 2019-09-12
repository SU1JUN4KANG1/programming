
#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

/*
分析：错误是指错选或者漏选~用异或运算来判断一个选项和正确选项是否匹配，如果是匹配的，那么异或的结果应当是0；如果不匹配，那么这个选项就是存在错选或者漏选的情况～例如：设a为00001，b为00010，c为00100，d为01000，e为10000，如果给定的正确答案是ac，即10001，那么如果给出的选项也是10001，异或的结果就是0；如果给出的选项是a或者ab，即00001或00011，异或之后不为0，就是错选和漏选的～通过异或操作的结果，再用与运算就可以把错选和漏选的选项找出来～fullscore表示一道题满分的分值；trueopt表示正确的选项，存储的是正确选项二进制的值，二进制由hash给出分别是1,2,4,8,16；cnt是错误的次数，maxcnt是最大错误次数~


*/
int main() {
    int n, m, optnum, truenum, temp, maxcnt = 0;
    int hash[] = {1, 2, 4, 8, 16}, opt[1010][110] = {0};
    char c;
    scanf("%d %d", &n, &m);
    vector<int> fullscore(m), trueopt(m);
    vector<vector<int>> cnt(m, vector<int>(5));
    for (int i = 0; i < m; i++) {
        scanf("%d %d %d", &fullscore[i], &optnum, &truenum);
        for (int j = 0; j < truenum; j++) {
            scanf(" %c", &c);
            trueopt[i] += hash[c-'a'];
        }
    }
    for (int i = 0; i < n; i++) {
        double grade = 0;
        for (int j = 0; j < m; j++) {
            getchar();
            scanf("(%d", &temp);
            for (int k = 0; k < temp; k++) {
                scanf(" %c)", &c);
                opt[i][j] += hash[c-'a'];
            }
            int el = opt[i][j] ^ trueopt[j];
            if (el) {
                if ((opt[i][j] | trueopt[j]) == trueopt[j]) {
                    grade += fullscore[j] * 1.0 / 2;
                }
                if (el) {
                    for (int k = 0; k < 5; k++)
                        if (el & hash[k]) cnt[j][k]++;
                }
            } else {
                grade += fullscore[j];
            }
        }
        printf("%.1f\n", grade);
    }
    for (int i = 0; i < m; i++)
        for (int j = 0; j < 5; j++)
            maxcnt = maxcnt > cnt[i][j] ? maxcnt : cnt[i][j];
    
    if (maxcnt == 0) {
        printf("Too simple\n");
    } else {
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < cnt[i].size(); j++) {
                if (maxcnt == cnt[i][j])
                    printf("%d %d-%c\n", maxcnt, i+1, 'a'+j);
            }
        }
    }
    return 0;
}



/*
#include <iostream>  
#include <algorithm>
#include <string.h>

using namespace std;

class sjk_form
{
	public:
		double value;
		int nu_;
		int answer_nu;
		int a[5];
		sjk_form();
};

class sjk_form2
{
	public:
	int answer_num;
	int answer[5];
	sjk_form2();
};

sjk_form2::sjk_form2()
{
	
	//answer[5] ={0};
	memset(answer,0,5*4);
}

sjk_form::sjk_form()
{
	//a[5] ={0};
	memset(a,0,5*4);
 } 
int main()
{
	int inp_stu, inp_que;
	cin >>inp_stu >>inp_que;
	
	sjk_form inp_que_arr[inp_que];
	char buf1 =0;
	for(int i=0;i <inp_que;i++)
	{
		cin >>inp_que_arr[i].value >>inp_que_arr[i].nu_ >>inp_que_arr[i].answer_nu;
		for(int j=0;j <inp_que_arr[i].answer_nu;j++)
		{
			cin >>buf1;
			cout <<buf1 <<endl;
			inp_que_arr[i].a[buf1 -'a'] =1;
		}
	}
	
	sjk_form2 stu_ans_arr[inp_stu];
	int answer_num =0;
	char buf =0;
	char buf2[5];
	getchar();
	bool statu1 =true; //
	bool statu2 =true;
	double stu_score =0;
	
	int wrong[inp_que];
	for(int i=0;i <inp_que ;i++)
	{
		 wrong[i] =0;
	}
	int wrong_2[inp_que][5];
	for(int i=0;i <inp_que;i++)
	{
		for(int j=0;j <5;j++)
		{
			wrong_2[i][j] =0; 
		}
	}
	
	for(int i=0;i <inp_stu;i++)
	{	
	
		stu_score =0;		
		
		
		for(int j=0;j <inp_que;j++)
		{
			statu1 =true; //
		 	statu2 =true;
		 	
		 	buf2[0] =0; buf2[1] =0; buf2[2] =0; buf2[3] =0; buf2[4] =0;
		 	
			scanf("(%d",&answer_num);
			for(int z=0;z <answer_num;z++)
			{
				scanf(" %c",&buf);
				buf2[z] =buf;
				cout <<buf <<endl;				
			}
			getchar();
			getchar(); 
			if(inp_que_arr[j].answer_nu >answer_num)
			{
				cout <<"half" <<endl;
				for(int x=0;x <answer_num;x++)
				{
					if(inp_que_arr[j].a[buf2[x] -'a'] ==1) //half score
					{
						
					}
					else //0 score
					{
						statu1 =false;
						cout <<"statu1" <<endl;
						wrong_2[j][buf2[x] -'a']++;
					}
										
				}
				if(statu1)
				{
					cout <<"add1" <<endl;
					stu_score =inp_que_arr[j].value/2 +stu_score;
					statu1 =true;
				}
				else
				{
					wrong[j]++;
				}
			}
			else if(inp_que_arr[j].answer_nu ==answer_num)
			{
				cout <<"fall" <<endl;
				for(int x=0;x <answer_num;x++)
				{
					if(inp_que_arr[j].a[buf2[x] -'a'] ==1) //full score
					{
						
					}
					else //0 score
					{
						statu2 =false;
						cout <<"statu2" <<endl;
						wrong_2[j][buf2[x] -'a']++;
					}

				}
				if(statu2)
				{
					cout <<"add2" <<endl;
					stu_score =inp_que_arr[j].value +stu_score;
					statu2 =true;
				}	
				else
				{
					wrong[j]++;	
				}	
			}
			else
			{
				wrong[j]++;
				for(int x=0;x <answer_num;x++)
				{
					if(inp_que_arr[j].a[buf2[x] -'a'] ==1) 
					{
						
					}
					else //0 score
					{
						wrong_2[j][buf2[x] -'a']++;
					}
										
				}
			}

		}		
		//cout <<"stu_score=" <<stu_score <<endl;
		printf("%0.1f\n",stu_score);
	}
	
	int the_max =0;
	for(int i=0;i <inp_que;i++)
	{
		if(wrong[i] >the_max) 
		{
			the_max =wrong[i];
		}
	}
	
	for(int i=0;i <inp_que;i++)
	{
		if(wrong[i] ==the_max)
		{
			cout <<i <<" " <<wrong[i];
		}
	}

	
	return 0;
}

*/

