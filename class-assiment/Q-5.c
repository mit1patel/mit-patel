#include <stdio.h>
main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    // Check if the number is even or odd
    if (n% 2 == 0) {
        printf("%d is an even number.\n", n);
    } 
	else
	{
        printf("%d is an odd number.\n", n);
    }
}

