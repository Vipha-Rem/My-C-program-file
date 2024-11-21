#include<stdio.h>

int main(){

    int a;
    printf("Input:");
    scanf("%i", &a);

    int sq=a*a;
    int cu=sq*a;

    printf("Square of %i is %i AND Cube of %i is %i", a, sq, a, cu);


}
