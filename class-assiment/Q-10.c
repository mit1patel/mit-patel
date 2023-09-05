#include <stdio.h>
int main() 
{
    char character;
    printf("Enter a character: ");
    scanf(" %c", &character);  // Note the space before %c to consume any whitespace or newline character

    // Check if the character is uppercase or lowercase
    if (character >= 'A' && character <= 'Z') {
        printf("%c is an uppercase character.\n", character);
    } else if (character >= 'a' && character <= 'z') {
        printf("%c is a lowercase character.\n", character);
    } else {
        printf("%c is not an alphabet character.\n", character);
    }

    return 0;
}

