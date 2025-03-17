#include<stdio.h>
#include<string.h>
struct Date
{
    int mm, dd, yy;
};
struct Employee
{
    int Emp_id;
    char Emp_name[20], Department[20], Address[20];
    struct Date Date_of_birth;

};
int main()
{
    int i;
    struct Employee emp[10];
    for(i=0; i<10; i++)
    {
        printf("\nEnter the details of employee %d: \n",i+1);
        printf("\nEnter the employee id: ");
        scanf("%d",&emp[i].Emp_id);
        printf("\nEnter the employee name: ");
        scanf("%s",emp[i].Emp_name);
        printf("\nEnter the department: ");
        scanf("%s",emp[i].Department);
        printf("\nEnter the address(all caps): ");
        scanf("%s",emp[i].Address);
        printf("\nEnter the date of birth(mm dd yy): ");
        scanf("%d %d %d",&emp[i].Date_of_birth.mm,&emp[i].Date_of_birth.dd,&emp[i].Date_of_birth.yy);
    }
    printf("\nDetails of the employees are: \n");
    for(i=0; i<10; i++)
    {
        printf("\nEmployee %d: \n",i+1);
        printf("\nEmployee id: %d",emp[i].Emp_id);
        printf("\nEmployee name: %s",emp[i].Emp_name);
        printf("\nDepartment: %s",emp[i].Department);
        printf("\nAddress: %s",emp[i].Address);
        printf("\nDate of birth: %d/%d/%d",emp[i].Date_of_birth.mm,emp[i].Date_of_birth.dd,emp[i].Date_of_birth.yy);
    }

    printf("\nDetails of the employees from POKHARA are: \n");
    for(i=0; i<10; i++)
    {
        if(strcmp((emp[i].Address),"POKHARA")==0)
        {
            printf("\nEmployee id: %d",emp[i].Emp_id);
            printf("\nEmployee name: %s",emp[i].Emp_name);
            printf("\nDepartment: %s",emp[i].Department);
            printf("\nAddress: %s",emp[i].Address);
            printf("\nDate of birth: %d/%d/%d",emp[i].Date_of_birth.mm,emp[i].Date_of_birth.dd,emp[i].Date_of_birth.yy);
        }
    }
    return 0;
}