#include<stdio.h>
int main()
{
    int a[5], i;
    printf("\nEnter 5 elements: \n");
    for(i=0;i<=4;i++)
    {
        printf("\na[%d]= ",i);
        scanf("%d",&a[i]);
    }
    printf("\n Size of array: %d",i+1);
    for(i=0;i<=4;i++)
    {	
        printf("\n Size of a[%d]: %d",i,sizeof(a[i]));
        printf("\n Address of a[%d]: %d",i,&a[i]);
        printf("\n Value of a[%d]: %d",i,a[i]);
        printf("\n");
    }
    return 0;
}
