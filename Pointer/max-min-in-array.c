#include<stdio.h>
int main()
{
    int a[100],n,i,max,min;
    int *ptr;
    printf("\nEnter number of elements: ");
    scanf("%d",&n);
    printf("\nEnter elements in array: ");
    ptr = &a[0];
    for(i=0;i<n;i++)
    {
        scanf("%d",(ptr+i));
    }
    printf("\nArray is:\n");
    for(i=0;i<n;i++)
    {
        printf("%d\t",*(ptr+i));
    }
    max = *ptr;
    min = *ptr;
    for(i=0;i<n;i++)
    {
        if(*(ptr+i)>max)
        {
            max = *(ptr+i);
        }
        if(*(ptr+i)<min)
        {
            min = *(ptr+i);
        }
    }
    printf("\nMaximum = %d, Minimum = %d",max,min);
    return 0;
}