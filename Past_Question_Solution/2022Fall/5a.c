#include<stdio.h>

int sum(int);

int main()
{
    int s;
    s = sum(50);
    printf("\nThe sum is %d.",s);
    return 0;
}

int sum(int n)
{
    if(n==0)
    {
        return 0;
    }
    else
    {
        return n + sum(n-1);
    }
}