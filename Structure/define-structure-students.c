//onlinegdb.com
#include<stdio.h>
struct Student
{
    char name[50];
    int roll;
    char address[50];
    float marks;
};
int main()
{
    struct Student s;
    printf("\nEnter Details ");
    printf("\nName, Roll Number, Address and Marks:\n ");
    gets(s.name);
    scanf(" %d %s %f",&s.roll,s.address,&s.marks);
    printf("\nName: %s, Roll Number: %d, Address:%s Marks:%0.2f",s.name,s.roll,s.address,s.marks);
    return 0;
}