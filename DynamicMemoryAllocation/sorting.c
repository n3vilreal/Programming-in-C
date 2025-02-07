//Sorting n elements in an array using dynamic memory allocation, functions and pointers
#include<stdio.h>
#include<stdlib.h>

void read(int *ptr, int n);
void display(int *ptr, int n);
void sort(int *ptr, int n);

int i,j;
int main()
{
    int n;
    int *ptr;
    printf("\nEnter no. of elements: ");
    scanf("%d",&n);
    printf("\nEnter elemnents in array: \n");
    ptr = (int*) malloc(n*sizeof(int));
    read(ptr,n);
    printf("\nUnsorted array: \n");
    display(ptr,n);
    printf("\nSorted array: \n");
    sort(ptr,n);
    display(ptr,n);
    free(ptr);
    return 0;
}

void read(int *ptr,int n)
{
    for(i=0;i<n;i++)
    {
        scanf("%d",(ptr+i));
    }
}

void display(int *ptr,int n)
{
    for(i=0;i<n;i++)
    {
        printf("%d\t",*(ptr+i));
    }
}

void sort(int *ptr,int n)
{
    int temp;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-1-i;j++)
        {
            if(*(ptr+j) > *(ptr+j+1))
            {
                temp = *(ptr+j);
                *(ptr + j) = *(ptr + j + 1);
                *(ptr+j+1)=temp;
            }
        }
    }
}