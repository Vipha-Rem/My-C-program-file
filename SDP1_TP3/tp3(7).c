#include<stdio.h>
#include<math.h>
int main(){

    float math, english, language;
    printf("Enter your Math score:"); scanf("%f", &math);
    printf("Enter your English score:"); scanf("%f", &english);
    printf("Enter your Language score:"); scanf("%f", &language);

    float average=(math+english+language)/3;
    printf("Your average is %f\n", average);
    
    if(average>=86 && average<=100){
        printf("This student gets grade A.");
    }
    else if(average<86 && average>=81){
        printf("This student gets grade B.");
    }
    else if(average<81 && average>=70){
        printf("This students gets grade C.");
    }
    else if(average<70 && average>=61){
        printf("This student gets grade D.");
    }
    else if(average<61 && average>=60){
        printf("This student gets grade E.");
    }
    else{
        printf("This student gets grade F.");
    }

}