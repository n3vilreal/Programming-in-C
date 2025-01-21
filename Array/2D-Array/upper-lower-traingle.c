#include<stdio.h>
int main()
{
    int a[50][50],b[50][50], i,j,m,n;
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
        printf("\nThe upper triangular matrix is: \n");
        for(i=0;i<m;i++)
        {
            for(j=0;j<n;j++)
            {
                b[i][j]=a[i][j];
                if(i>j)
                {
                    a[i][j]=0;
                }
                printf("%d\t",a[i][j]);
            }
            printf("\n");
        }
        printf("\nThe lower triangular matrix is: \n");
        for(i=0;i<m;i++)
        {
            for(j=0;j<n;j++)
            {
                if(i<j)
                {
                    b[i][j]=0;
                }
                printf("%d\t",b[i][j]);
            }
            printf("\n");
        }
    }
    else
    {
        printf("\nThe matrix is not square");
    }
    
    return 0;
}
