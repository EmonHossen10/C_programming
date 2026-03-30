#include <stdio.h>
// function prototype
int sum(int x, int y);
int main()
{

    int a, b;
    printf("Enter First Number : ");
    scanf("%d", &a);
    printf("Enter Second Number : ");
    scanf("%d", &b);

    int result=sum(a,b);
    printf("sum of %d + %d is = %d\n", a,b,result);

    return 0;
}

int sum(int x, int y)
{
    return x + y;
}