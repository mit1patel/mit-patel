#include <stdio.h>
main()
{
    char ch;
    int day;

    printf("Enter a character or a number (1-7): ");
    scanf("%c",&ch);
    switch (ch)
    {
        case 'a':
        case 'A':
        case 'e':
        case 'E':
        case 'i':
        case 'I':
        case 'o':
        case 'O':
        case 'u':
        case 'U':
            printf("%c is a vowel.\n", ch);
            break;
        case '1':
            printf("Monday\n");
            break;
        case '2':
            printf("Tuesday\n");
            break;
        case '3':
            printf("Wednesday\n");
            break;
        case '4':
            printf("Thursday\n");
            break;
        case '5':
            printf("Friday\n");
            break;
        case '6':
            printf("Saturday\n");
            break;
        case '7':
            printf("Sunday\n");
            break;
        default:
            printf("Not a valid input.\n");
            break;
    }
}

