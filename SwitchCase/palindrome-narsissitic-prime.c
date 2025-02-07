#include<stdio.h>
#include<math.h>
int main()
{
    int num, n, t1, t2, i, count=0,temp, rem,result=0;
    char choice;
    while(1)
    {   
        printf("\nMenu\na. Check prime\nb. Check narcissitic\nc. Check palindrome\nd.exit");
        printf("\nEnter your choice: ");
        scanf("%c",&choice);
        printf("\nEnter number: ");
        scanf("%d",&num);
        n=num;
        
        switch(choice)
        {
            case 'a':
                for(i=1;i<=n;i++)
                {
                    if(n%i==0)
                    {
                        count++;
                    }
                }
                if(count==2)
                {
                    printf("\n%d is prime number.",num);
                }
                else
                {
                    printf("\n%d is not prime number.",num);
                }
                break;
                
            case 'b':
                while(n!=0)
                {
                    count++;
                    n/=10;
                }
                while(n!=0)
                {
                    rem = n%2;
                    result+=pow(rem,count);
                    n/=10;
                }
                if(result==num)
                {
                    printf("\n%d is narcissitic number.",num);
                }
                else
                {
                    printf("\n%d is not narcissitic number.",num);
                }
                break;
                
            case 'c':
                 while(n!=0)
                {
                    rem = n%2;
                    result=result*10+rem;
                    n/=10;
                }
                if(result==num)
                {
                    printf("\n%d is palindrome number.",num);
                }
                else
                {
                    printf("\n%d is not palindrome number.",num);
                }
                break;
            
            case 'd': return 0;
            default: printf("\n!!! Invalid Input !!!\n");
        }
    }
    return 0;
}