#include<stdio.h>
int main()
{
    int a[100],n,i,j,temp;
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
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(*(ptr+j) > *(ptr+j+1))
            {
                temp = *(ptr + j);
                *(ptr + j) = *(ptr + j +1);
                *(ptr + j + 1) = temp;
            }
        }
    }
    printf("\nSorted Array: \n");
    for(i=0;i<n;i++)
    {
        printf("%d\t",*(ptr+i));
    }
    return 0;
}