#include<stdio.h>

int main(){

    int a, b;
    printf("Enter a:");
    scanf("%i", &a);
    printf("Enter b:");
    scanf("%i", &b);

    printf(">Basic mathematics are:\n");

    int add=a+b;
    printf("Addition: %i+%i=%i\n", a, b, add);

    int sub=a-b;
    printf("Subtraction: %i-%i=%i\n", a, b, sub);

    int mul=a*b;
    printf("Multiplication: %i*%i=%i\n", a, b, mul);

    float div=(float)a/b;
    printf("Division: %i/%i=%f\n", a, b, div);

    int mod=a%b;
    printf("Modulo: %i %% %i=%i\n", a, b, mod);

}
