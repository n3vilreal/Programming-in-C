//Program to convert uppercase to lowercase and vice versa

#include<stdio.h>
int main()
{
    char s[25];
    int i;
    printf("\nEnter string: ");
    scanf("%s",s);
    for(i=0;s[i]!='\0';i++)
    {
        if(s[i]>=65 && s[i]<=90)
        {
            s[i]+=32;
        }
        else if(s[i]>=97 && s[i]<=122)
        {
            s[i]-=32;
        }
    }
    printf("\nThe mutated string is: ");
    for(i=0;s[i]!='\0';i++)
    {
        printf("%c",s[i]);
    }
    
    return 0;
}