#include <stdio.h>
#define YES 1
#define NO 0

int htoi(char s[]);

int main()
{
    char s[] = "0x1278AFC89";
    int n = htoi(s);
    printf("%d\n", n);
    return 0;
}

int htoi(char s[])
{
    int i = 0, n = 0, temp = 0;
    int flag = YES; //是否为十六机制数标志
    if(s[i] == '0'){
        i++;
        if(s[i] == 'X' || s[i] == 'x')
            i++;
    }
    while(s[i] != '\0' && flag == YES){
        if(s[i] >= '0' && s[i] <= '9')
        {
            temp = s[i] - '0';
            flag = YES;
        }
        else if(s[i] >= 'a' && s[i] <= 'f'){
            temp = 10 + s[i] - 'a';
            flag = YES;
        }
        else if(s[i] >= 'A' && s[i] <= 'F'){
            temp = 10 + s[i] - 'A';
            flag = YES;
        }
        else
            flag = NO;
        if(flag == YES){
             n = n * 16 + temp;
        }
        i++;
    }
    return n;
}
