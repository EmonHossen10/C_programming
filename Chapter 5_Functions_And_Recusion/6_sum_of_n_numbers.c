#include <stdio.h>

int sumOfNNumbers(int n);

int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

   int result = sumOfNNumbers(n);
    printf("The sum of the first %d numbers is: %d\n", n, result);

    return 0;
}

int sumOfNNumbers(int n)
{
    if (n == 0)
    {
        return 0;
    }
    return n + sumOfNNumbers(n - 1);
}