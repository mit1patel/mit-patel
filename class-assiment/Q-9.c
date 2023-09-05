#include <stdio.h>
int main()
 {
    char character;
    printf("Enter a character: ");
    scanf(" %c", &character);  // Note the space before %c to consume any whitespace or newline character

    // Check if the character is an alphabet, digit, or special character
    if ((character >= 'a' && character <= 'z') || (character >= 'A' && character <= 'Z')) {
        printf("%c is an alphabet.\n", character);
    } else if (character >= '0' && character <= '9') {
        printf("%c is a digit.\n", character);
    } else {
        printf("%c is a special character.\n", character);
    }

    return 0;
}

