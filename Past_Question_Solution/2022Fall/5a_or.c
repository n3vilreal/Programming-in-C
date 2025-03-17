#include<stdio.h>

void isPrime(int); 

int main()
{
    int num;
    printf("\nEnter a number: ");
    scanf("%d",&num);
    isPrime(num);
}

void isPrime(int n)
{
    int i, count=0;
    for(i=1; i<=n; i++)
    {
        if(n%i==0)
        {
            count++;
        }
    }
    if(count==2)
    {
        printf("\n%d is a prime number.\n",n);
    }
    else
    {
        printf("\n%d is not a prime number.\n",n);
    }
}