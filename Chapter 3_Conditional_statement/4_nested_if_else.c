#include <stdio.h>

int main() {
    int age;

    printf("Enter your age: ");
    scanf("%d", &age);

    if(age >= 0) {  
        if(age <= 12) {
            printf("Child\n");
        } else {
            if(age <= 19) {
                printf("Teenager\n");
            } else {
                if(age <= 35) {
                    printf("Young Adult\n");
                } else {
                    if(age <= 50) {
                        printf("Adult\n");
                    } else {
                        if(age <= 65) {
                            printf("Middle Aged\n");
                        } else {
                            printf("Senior Citizen\n");
                        }
                    }
                }
            }
        }
    } else {
        printf("Invalid age\n");
    }

    return 0;
}