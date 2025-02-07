#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n,i,j;
    int *ptr;
    printf("\nEnter number of elements: ");
    scanf("%d",&n);
    printf("\nEnter elements in array:\n");
    ptr = (int*) malloc(n*sizeof(int));
    for(i=0;i<n;i++)
    {
        scanf("%d",(ptr+i));
    }
    printf("\nArray is:: ");
    for(i=0;i<n;i++)
    {
        printf("%d\t",*(ptr+i));
    }
    return 0;
}