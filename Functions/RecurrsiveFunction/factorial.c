#include<stdio.h>
int factorial(int);

int main()
{
    int n,fact;
    printf("\nEnter a number: ");
    scanf("%d",&n);
    fact = factorial(n);
    printf("\n%d factorial = %d",n,fact);
    return 0;
}
int factorial(int a)
{
    if(a==1)
    {
        return 1;
    }
    else
    {
        return (a*factorial(a-1));
    }
}