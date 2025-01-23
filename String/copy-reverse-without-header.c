//Program to input a string and copy and reverse it

#include<stdio.h>
int main()
{
    char s[25],cp[25],rev[25];
    int i,l=0;
    printf("\nEnter string: ");
    scanf("%s",s);
    for(i=0;s[i]!='\0';i++)
    {
        cp[i]=s[i];
        l++;
    }
    cp[i]='\0';
    for(i=0;s[i]!='\0';i++)
    {
        rev[i]=s[l-i-1];
    }
    rev[i]='\0';
    printf("\nThe copied string is: ");
    for(i=0;cp[i]!='\0';i++)
    {
        printf("%c",cp[i]);
    }
    printf("\nThe reversed string is: ");
    for(i=0;rev[i]!='\0';i++)
    {
        printf("%c",rev[i]);
    }
    
    return 0;
}