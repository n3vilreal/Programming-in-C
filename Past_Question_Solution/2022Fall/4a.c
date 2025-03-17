#include<stdio.h>

float area(float);

int main()
{
    float radius;
    printf("\nEnter the radius of the circle: ");
    scanf("%f",&radius);
    printf("\nArea of the circle is: %.2f\n",area(radius));
    return 0;
}

float area(float r)
{
    return 3.14*r*r;
}