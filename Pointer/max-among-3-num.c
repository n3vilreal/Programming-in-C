#include<stdio.h>
int main()
{
    int a, b, c, *p1, *p2, *p3;
    p1 = &a;
    p2 = &b;
    p3 = &c;
    printf("\nEnter 3 numbers: \n");
    scanf("%d %d %d",p1,p2,p3);
    
    if(*p1>*p2 && *p1>*p3)
    {
        printf("\n%d is greatest.",*p1);
    }
    else if(*p2>*p3)
    {
        printf("\n%d is greatest.",*p2);
    }
    else
    {
        printf("\n%d is greatest.",*p3);
    }
    return 0;
}