#include<stdio.h>
int main()
{
    int a[100], n, i, temp, sum=0, rem;
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
    //Armstrong Logic
    for(i=0;i<n;i++)
    {
        temp=a[i];
        while(temp!=0)
        {
            rem = temp%10;
            sum += (rem*rem*rem);
            temp /=10;
        }
        if(sum==a[i])
        {
            printf("\n%d is armstrong.",a[i]);
        }
        sum=0;
    }
    return 0;
}
