#include<stdio.h>

int main(){

    int s;
    printf("Input time in second(s):");
    scanf("%i", &s);

    int h=s/3600;
    int modh=s%3600;

    int min=modh/60;
    int modm=modh%60;

    printf("the time second of %i equals %ih %imn %is", s, h, min, modm);

}
