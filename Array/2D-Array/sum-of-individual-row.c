/*
    WAP to input a mxn order matrix and calculate the sum of each individual row.
*/

#include<stdio.h>
int main()
{
    int a[50][50], i, j, m, n, sum;
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
        sum = 0;
        for(j=0;j<n;j++)
        {
            sum+=a[i][j];
        }
        printf("\n Sum of %dth row = %d", i+1,sum);
    }
    
    return 0;
}
