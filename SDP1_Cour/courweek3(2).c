#include<stdio.h>
#include<math.h>
int main(){

    int number;
    printf("input number 1/2/3:");
    scanf("%i", &number);
    
    if(number==1){

        float a,b,c;
        printf("Enter a:"); scanf("%f", &a);
        printf("Enter b:"); scanf("%f", &b);
        printf("Enter c:"); scanf("%f", &c);

        float side=(a+b+c)/2.0;
        float area=sqrt(side*(side-a)*(side-b)*(side-c))*1.0;

        printf("Area of triangle is %f", area);

    }
    else if(number==2){

        float r;
        printf("Input radius:"); scanf("%f", &r);

        float circle=pow(r,2)*3.14;

        printf("Area of circle is %f", circle);

    }
    else{

        float wide, height;
        printf("Input value of wide:"); scanf("%f", &wide);
        printf("Input value of height:"); scanf("%f", &height);

        float surface=wide*height*1.0;
        printf("surface of rectangle is %f", surface);

    }
}