//Program to find the factorial of a number using functions
//Given int factorial(int number);

#include<stdio.h>

int factorial(int);

int number;

int main()
{   
    int fact;
    printf("\nEnter a number: ");
    scanf("%d",&number);
    fact = factorial(number);
    printf("\nFactorial of %d: %d",number,fact);
    return 0;
}

int factorial(int number)
{
    int i,factorialCalc=1;
    for(i=1;i<=number;i++)
    {
        factorialCalc *= i;
    }
    return factorialCalc;
}
