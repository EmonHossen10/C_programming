#include <stdio.h>
int main()
{

    int age;
    printf("Enter Your Age: ");
    scanf("%d", &age);
    if (age > 18)
    {
        printf("you are an adult");
        printf("You are eligible for voting");
        printf("\nYou are eligible for driving");
    }
    else
    {
        printf("you are not an adult\n");
    }

    printf("This is the end of the program");
    return 0;
}