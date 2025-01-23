

#include<stdio.h>
int main()
{
    char s[25],rev[25];
    int i,l=0,flag;
    printf("\nEnter string: ");
    scanf("%s",s);
    for(i=0;s[i]!='\0';i++)
    {
        l++;
    }
    for(i=0;i<l;i++)
    {
        rev[i]=s[l-i-1];
    }
    rev[i]='\0';
    for(i=0;rev[i]!='\0';i++)
    {
        if(s[i]!=rev[i])
        {
            flag=1;
            break;
        }
    }
    for(i=0;rev[i]!='\0';i++)
    {
        printf("%c",rev[i]);
    }
    if(flag==1)
    {
        printf("\nString is not palindrome.");
    }
    else
    {
        printf("\nString is palindrome.");
    }
    
    return 0;
}