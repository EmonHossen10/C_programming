#include <stdio.h>
int main()
{
printf("Enter a number: ");
int n;
scanf("%d", &n);
int i = 1;
while(i<=n){
    printf("%d\n", i);
    i++;
}
    
    return 0;
}