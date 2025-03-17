#include<stdio.h>

int main()
{
    int a,b,c,sum,sqsum;
    int choice;
    float avg;
    printf("\nEnter your choice: \n1: Sum\n2: Sum of squares\n3: Mean\n4: Exit\n");
    printf("\nYour choice: ");
    scanf("%d",&choice);

    if(choice == 4)
    {
        printf("\nExiting the program\n");
        return 0;
    }
    
    printf("\nEnter 3 numbers: \n");
    scanf("%d %d %d",&a,&b,&c);
    
    switch (choice)
    {
        case 1:
            sum = a+b+c;
            printf("\nSum of the numbers is: %d\n",sum);
            break;
        case 2:
            sqsum = a*a + b*b + c*c;
            printf("\nSum of squares of the numbers is: %d\n",sqsum);
            break;
        case 3: 
            avg = (a+b+c)/3.0;
            printf("\nMean of the numbers is: %.2f\n",avg);
            break;
        default:
            printf("\nInvalid choice\n");
            break;
    }
    return 0;

}