#include <stdio.h>
main()
{
    int n;
    printf("Enter any number: ");
    scanf("%d", &n);
    
    if(n> 0)
    {
        printf("Number is POSITIVE");
    }
    if(n < 0)
    {
        printf("Number is NEGATIVE");
    }
    if(n == 0)
    {
        printf("Number is ZERO");
    }

 
}	
