#include<stdio.h>
int addition(int);

int main()
{
    int n,sum;
    printf("\nEnter a number: ");
    scanf("%d",&n);
    sum = addition(n);
    printf("\nSum of %d natural numbers = %d",n,sum);
    return 0;
}
int addition(int a)
{
    if(a==0)
    {
        return 0;
    }
    else
    {
        return (a+addition(a-1));
    }
}