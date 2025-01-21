#include<stdio.h>
int main()
{
    int a[5], i,b[5],c[5];
    printf("\nEnter 5 elements: \n");
    for(i=0;i<=4;i++)
    {
        printf("a[%d]= ",i);
        scanf("%d",&a[i]);
    }
    printf("\nYour array is: ");
    for(i=0;i<=4;i++)
    {
        printf("\na[%d]: %d",i,a[i]);
    }
    printf("\nCopied array is: ");
    for(i=0;i<=4;i++)
    {   
        b[i] = a[i];
        printf("\nb[%d]: %d",i,b[i]);
    }
    printf("\nReversed array is: ");
    for(i=0;i<=4;i++)
    {   
        c[i] = a[4-i];
        printf("\nc[%d]: %d",i,c[i]);
    }
    return 0;
}
