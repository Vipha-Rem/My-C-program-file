#include<stdio.h>
#include<math.h>
int main(){

    char name[15];
    char gender;
    int salary;

    printf("The program will tell you about tax you will pay base on your salary and gender.\n");
    printf("Enter your name:"); scanf("%s", &name);
    printf("Enter your gender:"); scanf("%s", &gender);
    printf("Enter your salary:"); scanf("%i", &salary);

    if((gender=='m'|| gender=="M") && salary>400){
        float tax1=salary*0.1;
        printf("The tax you will pay is %f$", tax1);
    }
    else if((gender=='m' || gender=='M') && salary>=200 && salary<=400){
        float tax2=salary*0.05;
        printf("The tax you will pay is %f$", tax2);
    }
    else if((gender=='f' || gender=='F') && salary>500){
        float tax3=salary*0.05;
        printf("The tax you will pay is %f$", tax3);
    }
    else if((gender=='f' || gender=='F') && salary>=250 && salary<=500){
        float tax4=salary*0.03;
        printf("The tax you will pay is %f$", tax4);
    }
    else{
        printf("congratulation!! you don't have to pay tax.");
    }

}