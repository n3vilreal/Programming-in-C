#include<stdio.h>
int total_col_size = 25;
int m_dig,s_dig;
int main()
{
    int a[25][25],row,col,*ptr,i,j;
    printf("\nEnter row and column size: ");
    scanf("%d %d",&row,&col);
    if(row!=col)
    {
        printf("\nMatrix is not square matrix.");
        return 0;
    }
    ptr = &a[0][0];
    printf("\nEnter matrix elements: ");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            scanf("%d",(ptr+(i*total_col_size)+j));
        }
    }
    printf("\nMatrix: \n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            printf("%d\t",*(ptr+(i*total_col_size)+j));
        }
        printf("\n");
    }
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            if(i==j)
            {
                m_dig += *(ptr+(i*total_col_size)+j);
            }
            if(i+j == row-1)
            {
                s_dig += *(ptr+(i*total_col_size)+j);
            }
        }
    }
    printf("\nSum of main diagonal elements = %d\n",m_dig);
    printf("\nSum of secondary diagonal elements = %d\n",s_dig);
    return 0;
}