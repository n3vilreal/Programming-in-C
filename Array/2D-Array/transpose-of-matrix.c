
#include<stdio.h>
int main()
{
    int a[50][50], i, j, m, n, transpose[50][50], trow, tcolumn;
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
    //for transopose
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            transpose[j][i]=a[i][j];
        }
    }
    tcolumn = m;
    trow = n;
    printf("\nThe transpose matrix is\n" );
    for(i=0;i<trow;i++)
    {
        for(j=0;j<tcolumn;j++)
        {
            printf("%d\t",transpose[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}
