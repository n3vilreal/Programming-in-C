#include<stdio.h>

int main()
{
    int matA[5][5];
    int i,j,m,n;

    printf("\nEnter rows and columns in the matrix(m*n): \n");
    scanf("%d %d",&m,&n);
    printf("\nEnter the elements of the matrix: \n");
    for(i=0; i<m; i++)
    {
        for(j=0; j<n; j++)
        {
            scanf("%d",&matA[i][j]);
        }
    }
    printf("\nMatrix is: \n");
    for(i=0; i<m; i++)
    {
        for(j=0; j<n; j++)
        {
            printf("A%d%d =%d ",i,j,matA[i][j]);
        }
        printf("\n");
    }

    printf("\nThe transpose matrix is: \n");
    for(i=0; i<n; i++)
    {
        for(j=0; j<m; j++)
        {
            printf("A%d%d = %d ",i,j,matA[j][i]);
        }
        printf("\n");
    }
}