#include <stdio.h>
int main()
{
    // variable types
    int a = 10;       // 4 bytes
    float b = 20.5;   // 4 bytes
    char c = 'A';     // 1 byte
    double d = 30.99; // 8 bytes

    printf("Integer: %d\n", a);
    printf("Float: %f\n", b);
    printf("Character: %c\n", c);
    printf("Double: %lf\n", d);
    // update variable values
    a = 15;
    b = 25.5;
    c = 'B';
    d = 35.99;
    printf("********************************\n");
    printf("Updated Integer: %d\n", a);
    printf("Updated Float: %.2f\n", b);
    printf("Updated Character: %c\n", c);
    printf("Updated Double: %.2lf\n", d);

    // variable data types and their sizes
    printf("********************************\n");
    printf("Size of int: %zu bytes\n", sizeof(a));    // 4 bytes
    printf("Size of float: %zu bytes\n", sizeof(b));  // 4 bytes
    printf("Size of char: %zu bytes\n", sizeof(c));   // 1 byte
    printf("Size of double: %zu bytes\n", sizeof(d)); // 8 bytes

    // boolean and string types doesn't exist in C
    // (%d,%f,%f ....etc are called --> formate specifier)

    return 0;
}