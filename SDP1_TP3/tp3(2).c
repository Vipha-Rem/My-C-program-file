#include<stdio.h>
#include<math.h>

int main(){

    printf("Category A: negative and odd number.\n");
    printf("Category B: negative and even number.\n");
    printf("Category C: positive and odd number.\n");
    printf("Category D: positive and even number.\n");

    int n;
    printf("Input a number:"); scanf("%i", &n);

    if(n<0 && n%2==-1){
        printf("%i is in category A because %i is negative and odd number.", n, n);
    }
    else if(n<0 && n%2==0){
        printf("%i is in categroy B because %i is negative and even number.", n, n);
    }
    else if(n>0 && n%2==1){
        printf("%i is in category C because %i is positive and odd number.", n, n);
    }
    else if(n>0 && n%2==0){
        printf("%i is in category D because %i is positive and even number.", n, n);
    }

}