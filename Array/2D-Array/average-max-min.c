/*
    WAP to input mxn  order matrix and display the:
Calculate average of all elements.
Check if a  given value is present in the matrix or not. If present, also display the position.
Display maximum element value and minimum element.

*/


#include<stdio.h>
int main()
{
    int a[50][50], i, j, m, n, sum=0, value, flag=0, min, max;
    float avg;
    printf("\nEnter the dimension of array (mxn): ");
    scanf("%d %d",&m,&n);
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("\na[%d][%d]= ",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    printf("\nThe matrix is: \n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d\t ",a[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            sum+=a[i][j];
        }
    }
    avg = (1.0*sum)/(m*n);
    printf("\nAverage = %0.2f", avg);
    printf("\nEnter the value you want to check: ");
    scanf("%d",&value);
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            if(a[i][j]==value)
            {
                printf("\n%d is present in the a[%d][%d] portion of the matrix.",value,i,j);
                flag = 1;
            }
        }
    }
    if(flag==0)
    {
        printf("\n%d is not present in the array.",value);
    }
    min =a[0][0];
    max=a[0][0];
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            if(a[i][j]<min)
            {
                min =a[i][j];
            }
            if(a[i][j]>min)
            {
                max =a[i][j];
            }
        }
    }
    printf("\nMinimum = %d \nMaximum = %d",min,max);
    return 0;
}
