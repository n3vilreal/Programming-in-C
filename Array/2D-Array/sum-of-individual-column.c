#include<stdio.h>
int main()
{
    int a[50][50], i,j, sum,m,n;
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
    for(j=0;j<n;j++)
    {   
        sum = 0;
        for(i=0;i<m;i++)
        {
            sum+=a[i][j];
        }
        printf("\nThe sum of column %d is : %d",j+1,sum);
    }
    
    return 0;
}

