#include<stdio.h>
#include<math.h>

int main(){
    int Xa, Ya, Xb, Yb, Xc, Yc;
    printf("Enter coordinate of point A:"); scanf("%i %i", &Xa, &Ya);
    printf("Enter coordinate of point B:"); scanf("%i %i", &Xb, &Yb);
    printf("Enter coordinate of point C:"); scanf("%i %i", &Xc, &Yc);

    float area=(Xa*(Yb-Yc)+Xb*(Yc-Ya)+Xc*(Ya-Yb))/2.0;
    printf("The area of triangle with point A(%i,%i), B(%i,%i) and C(%i,%i) is %f\n", Xa, Ya, Xb, Yb, Xc, Yc, area);

    if(area<=3.00){
        printf("It's a small size triangle.\n");
    }
    else if(area>=3.00 && area<=10.00){
        printf("It's a medium size triangle.\n");
    }
    else{
        printf("It's a big size triangle.\n");
    }
}