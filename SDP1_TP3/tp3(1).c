#include<stdio.h>
int main(){

    int n;
    printf("Enter a number:"); scanf("%i", &n);

    if(n>0){
        printf("%i is a positive number.", n);
    }
    else if(n<0){
        printf("%i is a negative number", n);
    }
    else{
        printf("%i = 0", n);
    }
}