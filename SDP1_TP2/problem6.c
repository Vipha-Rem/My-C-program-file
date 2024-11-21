#include<stdio.h>
#include<math.h>

int main (){

    int x,y;

    printf("Enter value x:");
    scanf("%i", &x);

    printf("Enter value y:");
    scanf("%i", &y);

    float f1=2*x-3*pow(y,3)/2.0;//1
    printf("f1=%.2f\n", f1);

    float f2=(pow(x,2)-3*y)/cbrt(2*x-1);//2
    printf("f2=%.2f\n", f2);

    float f3=(sqrt(pow(x,3)-pow(y,2))-3*y)/2.0;//3
    printf("f3=%.2f\n", f3);

    float f4=sin(x)-3*cos(x)/2.0;//4
    printf("f4=%.2f\n", f4);

}
