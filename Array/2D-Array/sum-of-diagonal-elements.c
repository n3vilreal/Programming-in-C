/*
WAP to input mxn order matrix and calculate
	i. Sum of primary diagonal elements
	ii. Sum of secondary diagonal elements
	iii. Sum of all diagonal elements,
only if the matrix is square matrix.
*/

#include<stdio.h>
int main()
{
    int a[50][50], i,j,m,n,sum_pri=0,sum_sec=0,sum_all=0;
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
    if(m==n)
    {
        for(i=0;i<m;i++)
        {
            for(j=0;j<n;j++)
            {
                if(i==j)
                {
                    sum_pri += a[i][j];
                }
            }
            printf("\n");
        }
        for(i=0;i<m;i++)
        {
            for(j=0;j<n;j++)
            {
                if(i+j==m-1)
                {
                    sum_sec += a[i][j];
                }
            }
            printf("\n");
        }
        sum_all = sum_pri + sum_sec;
        printf("\nThe sum of primary diagonal elements = %d",sum_pri);
        printf("\nThe sum of secondary diagonal elements = %d",sum_sec);
        printf("\nThe sum of all diagonal elements = %d",sum_all);
    }
    else
    {
        printf("\nThe matrix is not square matrix.");
    }
    
    return 0;
}
