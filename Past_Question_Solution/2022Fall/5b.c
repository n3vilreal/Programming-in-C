#include<stdio.h>

int main()
{
    int i,j;
    char ch[]="ENGINEER";
    for(i=8;i>0;i--)
    {
        for(j=0;j<i;j++)
        {
            printf("%c",ch[j]);
        }
        printf("\n");
    }
    return 0;
}