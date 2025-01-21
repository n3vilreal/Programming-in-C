#include<stdio.h>
int main()
{
    int a[100], n, i, value, flag=0;
    printf("\nEnter number of elements: ");
    scanf("%d",&n);
    printf("\nEnter %d elements:",n);
    for(i=0;i<n;i++)
    {
        printf("\na[%d]= ",i);
        scanf("%d",&a[i]);
    }
    //Printing array
    printf("\nThe array is: ");
    for(i=0;i<n;i++)
    {
        printf("\na[%d]= %d",i,a[i]);
    }
    printf("\nEnter value you want to check: ");
    scanf("%d",&value);
    
    for(i=0;i<n;i++)
    {
        if(a[i]==value)
        {
            printf("\n%d value is present in a[%d] portion.",value,i);
            flag=1;
        }
    }
    if(flag==0)
    {
        printf("\n%d is not present in array.",value);
    }
    return 0;
}
