//Program to input string and display its length

#include<stdio.h>
int main()
{
    char s[25];
    int i,count=0;
    printf("\nEnter string: ");
    scanf("%s",s);
    for(i=0;s[i]!='\0';i++)
    {
        count++;
    }
    printf("\nLength of string: %d",count);
    return 0;
}