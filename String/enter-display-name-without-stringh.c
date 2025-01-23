//Program to input your name in string and display it

#include<stdio.h>
int main()
{
    char name[25];
    int i;
    printf("\nEnter your name: ");
    scanf("%s",name);
    printf("\nYour name is: ");
    for(i=0;name[i]!='\0';i++)
    {
        printf("%c",name[i]);
    }
    return 0;
}