#include<stdio.h>
#include<string.h>
struct Date
{
    int mm, dd, yy;
};

struct Employee
{
    int Emp_id;
    char Name[20], Address[20];
    float Salary;
    struct Date DOB;
};

int main()
{
    struct Employee emp[3];
    int i;

    for(i=0;i<3;i++)
    {
        printf("\nEmployee %d:",i+1);

        printf("\nEmp_id: ");
        scanf("%d",&emp[i].Emp_id);

        printf("\nName: ");
        scanf("%s",&emp[i].Name);

        printf("\nAddress: ");
        scanf("%s",&emp[i].Address);

        printf("\nSalary: ");
        scanf("%f",&emp[i].Salary);

        printf("\nDOB(mm/dd/yy): ");
        scanf("%d %d %d",&emp[i].DOB.mm,&emp[i].DOB.dd,&emp[i].DOB.yy);
    }

    for(i=0;i<3;i++)
    {
        printf("\nEmp_id: %d",emp[i].Emp_id);
        printf("\nName: %s",emp[i].Name);
        printf("\nAddress: %s",emp[i].Address);
        printf("\nSalary: %f",emp[i].Salary);
        printf("\nDOB: %d/%d/%d",emp[i].DOB.mm,emp[i].DOB.dd,emp[i].DOB.yy);
    }

    for(i=0;i<3;i++)
    {
        if(strcmp(emp[i].Address,"Kathmandu")==0)
        {
            printf("\nEmp_id: %d",emp[i].Emp_id);
            printf("\nName: %s",emp[i].Name);
            printf("\nAddress: %s",emp[i].Address);
            printf("\nSalary: %f",emp[i].Salary);
            printf("\nDOB: %d/%d/%d",emp[i].DOB.mm,emp[i].DOB.dd,emp[i].DOB.yy);
        }
    }
}