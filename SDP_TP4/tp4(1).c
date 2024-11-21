#include<stdio.h>
#include<math.h>

int main(){

    printf("This program will tell you whether the date is valid or invalid\n");
    int year,month,day;
    printf("Enter number of year:"); scanf("%i", &year);
    printf("Enter number of month:"); scanf("%i", &month);
    printf("Enter number of day:"); scanf("%i", &day);

    if(year>=1 && year<=2024){
        if(month==1 || month==3 || month==5 || month==7 || month==8 || month==10 || month==12){
            if(day>=1 && day<=31){
                printf("BRAVO!! The date is valid.");
            }
            else{
                printf("The date is invalid.");
            }
        }
        else if(month==4 || month==6 || month==9 || month==11){
            if(day>=1 && day<=30){
                printf("BRAVO!! The date is valid.");
            }
            else{
                printf("The date is invalid.");
            }
        }
        else if(month==2){
            if(year%4==0){
                if(day>=1 && day<=29){
                    printf("BRAVO!! The date is valid.");
                }
                else{
                    printf("The date is invalid.");
                }
            }
            else{
                if(day>=1 && day<=28){
                    printf("BRAVO!! The date is valid.");
                }
                else{
                    printf("The date is invalid.");
                }
            }
        }
        else{
            printf("The date is invalid.");
        }
    }
    else{
        printf("The date is invalid.");
    }

}