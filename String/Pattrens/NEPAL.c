
#include<stdio.h>
int main()
{
    char ch[]={'N','E','P','A','L'};
    int i,j;
    /*
        N
        NE
        NEP
        NEPA
        NEPAL
    */
    for(i=0;i<5;i++)
    {
        for(j=0;j<=i;j++)
        {
            printf("%c",ch[j]);
        }
        printf("\n");
    }

    /*
        NEPAL
        NEPA
        NEP
        NE
        N
    */
    for(i=5;i>0;i--)
    {
        for(j=0;j<i;j++)
        {
            printf("%c",ch[j]);
        }
        printf("\n");
    }

    /*
        1 N
        2 NE
        3 NEP
        4 NEPA
        5 NEPAL
    */
     for(i=0;i<5;i++)
    {   
        printf("%d ",i+1);
        for(j=0;j<=i;j++)
        {
            printf("%c",ch[j]);
        }
        printf("\n");
    }

    return 0;
}
