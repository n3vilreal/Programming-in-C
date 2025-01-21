#include<stdio.h>
int main()
{
    int a[100], size, i, eCount=0, oCount=0, eSum=0, oSum=0;
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
        if(a[i]%2==0)
        {
            eCount++;
            eSum+=a[i];
        }
        else
        {
            oCount++;
            oSum+=a[i];
        }
    }
    printf("\nNumber of even elements: %d",eCount);
    printf("\nNumber of odd elements: %d",oCount);
    printf("\nSum of even elements: %d",eSum);
    printf("\nSum of odd elements: %d",oSum);
    return 0;
}
