#include<stdio.h>
struct Date
{
    int year, day, month;
};
struct Employees
{
    char name[20],degisnation[20];
    int id;
    float salary;
    struct Date doj;
};
int i,j,n;
void read(struct Employees [],int);
void display(struct Employees [],int);
void sort(struct Employees [],int);
int main()
{
    struct Employees e[100],temp;
    printf("\nEnter number of employees: ");
    scanf("%d",&n);
    read(e,n);
    display(e,n);
    sort(e,n);
    display(e,n);
    
}
void read(struct Employees e[],int n)
{
    for(i=0;i<n;i++)
    {
        printf("\nEmployee %d",i+1);
        printf("\nEnter name: ");
        scanf("%s",e[i].name);
        printf("\nEnter degisnation: ");
        scanf("%s",e[i].degisnation);
        printf("\nEnter id: ");
        scanf("%d",&e[i].id);
        printf("\nEnter salary: ");
        scanf("%f",&e[i].salary);
        printf("\nEnter Date of Joining: ");
        scanf("%d %d %d",&e[i].doj.year,&e[i].doj.month,&e[i].doj.day);
    }
}
void display(struct Employees e[],int n)
{
    for(i=0;i<n;i++)
    {
        printf("\nEmployee %d",i+1);
        printf("\nName: %s", e[i].name);
        printf("\nDegisnation: %s", e[i].degisnation);
        printf("\nID: %d",e[i].id);
        printf("\nSalary: %0.2f",e[i].salary);
        printf("\nDate of Joining: %d/%d/%d",e[i].doj.year,e[i].doj.month,e[i].doj.day);
    }
}
void display(struct Employees e[],int n)
{
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(e[j].id>e[j+1].id)
            {
                temp = e[j];
                e[j] = e[j+1];
                e[j+1] = e[j];
            }
        }
    }
}