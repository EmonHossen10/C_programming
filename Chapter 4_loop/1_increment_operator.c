#include<stdio.h>
int main(){

    //++i -> pre-increment operator
    //i++ -> post-increment operator

    printf("Post-increment operator:\n");
    int i=1;
    printf("%d\n",i++); //1
    printf("%d\n",i);   //2
    printf("Pre-increment operator:\n");
    int j=1;
    printf("%d\n",++j); //2
      printf("%d\n",j); //2
    return 0;
}