#include<stdio.h>

int main(){

    int h, m, s;

    printf("Enter hour:");
    scanf("%i", &h);

    printf("Enter minute:");
    scanf("%i", &m);

    printf("Enter second:");
    scanf("%i", &s);

    int hour=h*3600;
    int min=m*60;

    int total=hour+min+s;

    printf("The above time is equal to %i seconds", total);

}
