#include <stdio.h>

void table(int n);

int main()
{
    int a;
    printf("Enter a number to print its table : ");
    scanf("%d", &a);
    table(a);// argument 

    return 0;
}

void table(int n) //parameters
{

    for (int i = 1; i <= 10; i++)
    {
        printf("%d X %d = %d\n", n, i, n * i);
    }
}