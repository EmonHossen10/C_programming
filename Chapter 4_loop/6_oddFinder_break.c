#include <stdio.h>

int main()
{
    int n;
    do
    {
        printf("Enter a number: ");
        scanf("%d", &n);

        if (n % 2 != 0)
        {
            printf("Odd number entered: %d\n", n);
            break;
        }

        printf("Even number: %d\n", n);

    } while (1);

    printf("Program ended.\n");
    return 0;
}