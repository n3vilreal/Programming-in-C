//Display Simple Interest using function
//Given double simpleInterest(double Principle,float rate, int time);

#include<stdio.h>

double simpleInterest(double,float, int);

double Principle;
float rate;
int time;

int main()
{   
    double si;
    printf("\nEnter Principle, Rate and Time: \n");
    scanf("%lf %f %d",&Principle, &rate, &time);
    si = simpleInterest(Principle,rate,time);
    printf("\nSimple interest: %0.2lf", si);
    return 0;
}

double simpleInterest(double Principle,float rate, int time)
{
    return(Principle*rate*time*0.01);
}