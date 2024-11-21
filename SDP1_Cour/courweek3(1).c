#include<stdio.h>
#include<math.h>
main (){

    int number;
    printf("input number 1/2:");
    scanf("%i", &number);

    if(number==1){

        float tem_c;
        printf("Enter temperature in celcius:");
        scanf("%f", &tem_c);

        float tem_f=(9*tem_c/5)+32;

        printf("temperature in farenheit:%f", tem_f);

    }
    else{

        float temf;
        printf("Enter temperature in farenheit:");
        scanf("%f", &temf);
        
        float temc=(temf-32)*5/9.0;

        printf("temperature in celcius is:%f", temc);

    }

}