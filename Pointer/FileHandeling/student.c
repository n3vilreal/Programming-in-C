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
    struct Student s, sread;
    FILE *fptr;
    // fptr = fopen("student.txt","w");
    fptr = fopen("files/student.txt","w+");
    if (fptr==NULL)
    {
        printf("\nSorry!! File could not be found");
        return 1;
    }
    printf("Name: ");
    scanf("%s",s.name);
    printf("Address: ");
    scanf("%s",s.address);
    printf("Faculty: ");
    scanf("%s",s.faculty);
    printf("\nDOB (yyyy mm dd): ");
    scanf("%d %d %d",&s.dob.year,&s.dob.month,&s.dob.day);
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