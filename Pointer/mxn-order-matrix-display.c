#include<stdio.h>
int total_col_size = 25;

int main()
{
    int a[25][25],row,col,*ptr,i,j;
    printf("\nEnter row and column size: ");
    scanf("%d %d",&row,&col);
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
    return 0;
}