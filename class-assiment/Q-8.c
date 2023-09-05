#include <stdio.h>
int main() 
{
    char c;

    // Input a character
    printf("Enter a character: ");
    scanf(" %c", &c);  // Note the space before %c to consume any whitespace or newline character

    // Check if the character is a vowel or a consonant
    if ((c >= 'a' && c<= 'z') || (c >= 'A' && c <= 'Z')) {
        switch (c) {
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':
            case 'A':
            case 'E':
            case 'I':
            case 'O':
            case 'U':
                printf("%c is a vowel.\n", c);
                break;
            default:
                printf("%c is a consonant.\n", c);
        }
    } else 
	{
        printf("Invalid input. Please enter a valid character.\n");
    }

    return 0;
}

