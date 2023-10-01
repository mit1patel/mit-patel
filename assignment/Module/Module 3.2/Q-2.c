#include <stdio.h>
main() 
{
    double num1, num2;

    printf("Enter two numbers: ");
    scanf("%lf %lf", &num1, &num2);

    printf("Before swapping: num1 = %.2lf, num2 = %.2lf\n", num1, num2);

    // Swapping without a third variable
    num1 = num1 + num2;
    num2 = num1 - num2;
    num1 = num1 - num2;

    printf("After swapping: num1 = %.2lf, num2 = %.2lf\n", num1, num2);
}

