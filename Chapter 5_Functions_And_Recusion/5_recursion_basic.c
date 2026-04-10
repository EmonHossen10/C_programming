// if work done by loop, it also done  by recursion

#include <stdio.h>

void printNumbers(int n);
int main()
{
    printf("Recursion example\n");

    printNumbers(5); // Call the recursive function with an initial value
    return 0;
}

void printNumbers(int n)
{
    if (n == 0)
    {
        return;
    }
    printf("%d\n", n);
    printNumbers(n - 1); // Recursive call with a smaller value
}