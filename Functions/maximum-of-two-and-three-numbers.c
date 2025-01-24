//Program to print maximum of two and three numbers
//Given int maximumTwo(int,int); and int maximumThree(int,int);

#include<stdio.h>

int maximumTwo(int,int);
int maximumThree(int,int);

int num1,num2,num3;

int main()
{   
    int max2,max3;
    printf("\nEnter first and second number: \n");
    scanf("%d%d",&num1,&num2);
    max2=maximumTwo(num1,num2);
    printf("\nMaximum between %d and %d is %d",num1,num2,max2);
    printf("\nEnter third number: \n");
    scanf("%d",&num3);
    max3=maximumThree(max2,num3);
    printf("\nMaximum between %d,%d and %d is %d",num1,num2,num3,max3);
    return 0;
}

int maximumTwo(int num1,int num2)
{
    if(num1>num2)
    {
        return num1;
    }
    else
    {
        return num2;
    }
}

int maximumThree(int max2,int num3)
{
    if(max2>num3)
    {
        return max2;
    }
    else
    {
        return num3;
    }
}