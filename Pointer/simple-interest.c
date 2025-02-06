#include<stdio.h>
int main()
{
    float p,t,r,si;
    float *pp,*pt, *pr;
    pp = &p;
    pt = &t;
    pr = &r;
    printf("\nEnter principle, time and rate: \n");
    scanf("%f %f %f",pp,pt,pr);
    si = (*pp * *pr * *pr)/100;
    printf("\nSimple Interest = %0.2f",si);
    return 0;
}