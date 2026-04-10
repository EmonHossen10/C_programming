#include <stdio.h>

int calPercentage(int math, int english, int bangla);

int main()
{
    int math, english, bangla, n;
    printf("Enter your math marks: ");
    scanf("%d", &math);
    printf("Enter your english marks: ");
    scanf("%d", &english);
    printf("Enter your bangla marks: ");
    scanf("%d", &bangla);

    int percentage = calPercentage(math, english, bangla);
    printf("Your percentage is: %d%%\n", percentage);

    return 0;
}
int calPercentage(int math, int english, int bangla)
{
    return ((math + english + bangla) / 3)  ;
}