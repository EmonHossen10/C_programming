#include <stdio.h>

int main()
{
    int age = 22;
    int *ptr = &age;

    // Correct printing
    printf("Address of age: %p\n", (void*)&age);
    printf("Address stored in ptr: %p\n", (void*)ptr);
    printf("Address of ptr itself: %p\n", (void*)&ptr);

    //value printing
    printf("Value of age: %d\n", age);
    printf("Value pointed to by ptr: %d\n", *ptr);
    printf("Value of (address): %d\n", *(&age));

    return 0;
}