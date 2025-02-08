#include<stdio.h>
int main()
{
    int choice, num1, num2, result;
    while(1)
    {
        printf("\nEnter two numbers: \n");
        scanf("%d%d",&num1,&num2);
        
        printf("\nMenu \n1. Add \n2. Subtract \n3. Divide \n4. Multiply \n5. Exit");
        printf("\nEnter your choice: ");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1: 
                result = num1 + num2;
                printf("\n%d + %d = %d", num1, num2, result);
                break;
                
            case 2: 
                result = num1 - num2;
                printf("\n%d - %d = %d", num1, num2, result);
                break;
                
            case 3: 
                result = num1 / num2;
                printf("\n%d / %d = %d", num1, num2, result);
                break;
                
            case 4: 
                result = num1 * num2;
                printf("\n%d * %d = %d", num1, num2, result);
                break;
                
            case 5: return 0;
            
            default:
                printf("\n\n !! Invalid Input ");
            
        }
    }
    return 0;
}