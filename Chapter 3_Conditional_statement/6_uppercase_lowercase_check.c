#include <stdio.h>
int main()
{

    char ch;
    printf("Enter a character: ");
    scanf("%c", &ch);

    // int 65 to 90-> A to Z€
    if (ch >= 'A' && ch <= 'Z')
    {

        printf("Uppercase letter\n");
    }
    // int 97 to 122-> a to z
    else if (ch >= 'a' && ch <= 'z')
    {
        printf("Lowercase letter\n");
    }
    else
    {
        printf("Not an alphabet\n");
    }
    return 0;
}