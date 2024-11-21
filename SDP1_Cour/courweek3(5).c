#include<stdio.h>
#include<math.h>
main(){

    printf("solving Equadratic equation\n");
    float a,b,c;
    printf("Input coefficient a:"); scanf("%f", &a);
    printf("Input coefficient b:"); scanf("%f", &b);
    printf("Input coefficient c:"); scanf("%f", &c);

    float delta=pow(b,2)-4*a*c;
    if(delta==0){
        float X1=-b/2.0*a;
        float X2=-b/2.0*a;
        printf("The roots of the equation are X1=%.2f and X2=%.2f", X1, X2);
    }
    else if(delta>0){
        float X1=(-b-sqrt(delta))/2.0*a;
        float X2=(-b+sqrt(delta))/2.0*a;
        printf("The roots of the equation are X1=%.2f and X2=%.2f", X1, X2);
    }
    else{
        printf("The roots of the equation aren't the real number.");
    }
}
