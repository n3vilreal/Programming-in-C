#include<stdio.h>
int main()
{
    char s1[25],s2[25];
    int i,j=0,l=0;
    printf("\nEnter first string: ");
    scanf("%s",s1);
    printf("\nEnter second string: ");
    scanf("%s",s2);
    for(i=0;s1[i]!='\0';i++)
    {
        l++;
    }
    for(i=l;s2[j]!='\0';i++)
    {
        s1[i]=s2[j];
        j++;
    }
    printf("\nThe concatenated string is: %s",s1);
    return 0;
}