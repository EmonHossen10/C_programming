#include<stdio.h>
int main(){

    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    for (int i=1;i<=n;i++){
        if(i==6){
            continue;
        }
        else{
            printf("%d\n", i);
        }
    }
}