#include<stdio.h>
int main()
{
    int a[100], n, i, maximum, minimum;
    printf("\nEnter number of elements: ");
    scanf("%d",&n);
    printf("\nEnter %d elements:",n);
    for(i=0;i<n;i++)
    {
        printf("\na[%d]= ",i);
        scanf("%d",&a[i]);
    }
 
    printf("\nThe array is: ");
    for(i=0;i<n;i++)
    {
        printf("\na[%d]= %d",i,a[i]);
    }
    minimum=a[0];
    maximum=a[0];
    for(i=0;i<n;i++)
    {
        if(a[i]<minimum)
        {
            minimum = a[i];
        }
        if(a[i]>maximum)
        {
            maximum = a[i];
        }
    }
    printf("\nMaximum = %d, Minimum = %d",maximum,minimum);
    return 0;
}
