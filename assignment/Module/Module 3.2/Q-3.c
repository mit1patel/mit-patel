#include <stdio.h>
main() 
{
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

	(number %2 == 0) ? printf("%d is even.\n",number) : printf("%d is odd.\n",number);
	
}
