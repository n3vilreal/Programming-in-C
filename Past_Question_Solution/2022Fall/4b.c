#include<stdio.h>

int main()
{
    int arr[5],i,sum=0;
    int *a;
    a=&arr;

    printf("\nEnter the elements: \n");
    for(i=0; i<5; i++)
    {
        scanf("%d",a+i);
    }
    printf("\nElements are: \n");
    for(i=0; i<5; i++)
    {
        printf("%d\t",*(a+i));
    }
    for(i=0; i<5; i++)
    {
        sum+=*(a+i);
    }
    printf("\nSum of the elements is: %d\n",sum);
    return 0;
}