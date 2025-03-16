#include<stdio.h>
struct Date
{
    int year, month, day;
};
struct Student
{
    char name[20],address[20],faculty[20];
    struct Date dob;
};

int main()
{
    struct Student s[100], sread;
    int n,i;
    FILE *fptr;
    // fptr = fopen("student.txt","w");
    fptr = fopen("files/student-loop.txt","w+");
    if (fptr==NULL)
    {
        printf("\nSorry!! File could not be found");
        return 1;
    }
    printf("\nEnter number of data you want to enter: ");
    scanf("%d",&n);
    for ( i = 0; i < n; i++)
    {
        printf("Name: ");
        scanf("%s",s[i].name);
        printf("Address: ");
        scanf("%s",s[i].address);
        printf("Faculty: ");
        scanf("%s",s[i].faculty);
        printf("\nDOB (yyyy mm dd): ");
        scanf("%d %d %d",&s[i].dob.year,&s[i].dob.month,&s[i].dob.day);
    }
    
    fwrite(&s,sizeof(struct Student),1,fptr);
    printf("\nStructure is successfully written in file.");
    rewind(fptr);
    fread(&sread,sizeof(struct Student),1,fptr);
    printf("\nName: %s",sread.name);
    printf("\nAddress: %s",sread.address);
    printf("\nFaculty: %s",sread.faculty);
    printf("\nDOB: %d/%d/%d",sread.dob.year,sread.dob.month,sread.dob.day);
    fclose(fptr);
    return 0;
}