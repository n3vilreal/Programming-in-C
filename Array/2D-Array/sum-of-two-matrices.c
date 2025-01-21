#include<stdio.h>
int main()
{
    int a[50][50],b[50][50],c[50][50], i,j,m,n;
    printf("\nEnter the dimension of array (mxn): ");
    scanf("%d %d",&m,&n);
    printf("\nEnter first matrix: \n")
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("\na[%d][%d]= ",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    printf("\nEnter second matrix: \n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("\nb[%d][%d]= ",i,j);
            scanf("%d",&b[i][j]);
        }
    }
    printf("\nThe matrices are: \n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d\t ",a[i][j]);
        }
        printf("\n");
    }
    printf("\n\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d\t ",b[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            c[i][j] = a[i][j] + b[i][j];
        }
    }
    printf("\nThe sum of matrices is: \n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d\t ",c[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}
