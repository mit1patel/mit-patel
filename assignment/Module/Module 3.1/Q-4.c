// WAP to find simple interest
#include <stdio.h>
void main()
{
    float a,b,c,si;
    printf("Enter the value of a:\n");
    printf("Enter the value of b:\n");
    printf("Enter the value of c:\n");
    scanf("%f%f%f", &a, &b, &c);
    si = a * b * c / 100;
    printf("simple interest: %f", si);
}
