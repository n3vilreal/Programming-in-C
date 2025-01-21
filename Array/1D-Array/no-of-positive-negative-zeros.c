#include<stdio.h>
int main()
{
    int a[100], size, i, nCount=0, pCount=0, zCount=0;
    printf("\nEnter number of elements: ");
    scanf("%d",&size);
    printf("\nEnter %d elements:",size);
    for(i=0;i<size;i++)
    {
        printf("\na[%d]= ",i);
        scanf("%d",&a[i]);
    }
    printf("\nThe array is: ");
    for(i=0;i<size;i++)
    {
        printf("\na[%d]= %d",i,a[i]);
    }
    for(i=0;i<size;i++)
    {
        if(a[i]>0)
        {
            pCount++;
        }
        else if(a[i]<0)
        {
            nCount++;
        }
        else
        {
            zCount++;
        }
    }
    printf("\nNumber of positive values: %d",pCount);
    printf("\nNumber of negative values: %d",nCount);
    printf("\nNumber of zeros: %d",zCount);
    return 0;
}
