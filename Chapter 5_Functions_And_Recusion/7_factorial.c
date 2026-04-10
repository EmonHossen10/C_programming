#include <stdio.h>

int fact(int n);
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    printf("The factorial of %d is: %d\n", n, fact(n));

    return 0;
}

int fact(int n)
{
    if (n == 0)
    {
        return 1;
    }
    return n * fact(n - 1);
}

//how the function works for fact(4):

// fact(4)
// = 4 * fact(3)

// = 4 * (3 * fact(2))

// = 4 * (3 * (2 * fact(1)))

// = 4 * (3 * (2 * (1 * fact(0))))

// = 4 * (3 * (2 * (1 * 1)))