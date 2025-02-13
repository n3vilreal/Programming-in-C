#include<stdio.h>
struct Date
{
    int year, month, day;
};
struct Student
{
    char name[50];
    int roll;
    char address[50];
    float marks;
    struct Date dob;
};
int main()
{
    struct Student s;
    printf("\nEnter Details ");
    printf("\nName, Roll Number, Address, Marks:\n ");
    scanf("%s %d %s %f",s.name,&s.roll,s.address,&s.marks);
    printf("\nEnter Date of Birth (yyyy/mm/dd): ");
    scanf("%d %d %d",&s.dob.year,&s.dob.month,&s.dob.day);
    printf("\nName: %s, Roll Number: %d, Address:%s Marks:%0.2f Date of Birth: %d/%d/%d",s.name,s.roll,s.address,s.marks,s.dob.year,s.dob.month,s.dob.day);
    return 0;
}