#include<stdio.h>
#include<math.h>

int main(){

    int x,y;
    printf("Enter the value of x:");
    scanf("%i", &x);

    printf("Enter the value of y:");
    scanf("%i", &y);

    float f1=2*x-3*pow(y,3);
    printf("F1=%f\n", f1);
}
