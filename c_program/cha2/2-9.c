#include<stdio.h>
 
int bitcount(unsigned x)
{
    int n = 0;
    while(x > 0)
    {
        x = x & (x - 1);
        n++;
    }
    return n;
}
 
int main()
{
    unsigned x = 7;
    int n;
    n = bitcount(x);
    printf("%d\n", n);
    return 0;
}
