#include <stdio.h>

#define MAX_SIZE 10000

int binsearch(int x, int v[], int n)
{
    int low, high, mid;
    low = 0;
    high = n - 1;

    while (v[mid = (low + high) / 2] != x && low != high  ) 
    {
        if (x < v[mid])
            high = mid - 1;
        else if (x > v[mid])
            low = mid + 1;
    }

    if (v[mid] == x) 
        return mid; 
    else
        return -1;
}

int main () {
	int v[MAX_SIZE];
    int i, x, n;
    
    for (i = 0; i < MAX_SIZE; i++)
        v[i] = i;
        
	x = 22; // the nu what we search
	
	n = binsearch(x, v, MAX_SIZE);
    printf("%d\n", n);
	
	return 0;
}



