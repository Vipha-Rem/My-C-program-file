#include<stdio.h>
#include<math.h>
int main(){

    int day, mon, year;
    printf("Enter day:"); scanf("%i", &day);
    printf("Enter month:"); scanf("%i", &mon);
    printf("Enter year:"); scanf("%i", &year);

    if(year>=1 && year<=2024){
        if(mon==1 || mon==3 || mon==5 || mon==7 || mon==8 || mon==10 || mon==12){
            if(day>=1 && day<=31){
                printf("The date is valid, BRAVO!!");
            }
            else{
                printf("The date is invalid");
            }
        }
        else if(mon==4 || mon==6 || mon==9 || mon==11){
            if(day>=1 && day<=30){
                printf("The date is valid, BRAVO!!");
            }
            else{
                printf("The date is invalid");
            }
        }
        else if(mon==2){
            if(year%4==0){
                if(day>=1 && day<=29){
                    printf("The date is valid, BRAVO!!");
                }
                else{
                    printf("The date is invalid");
                }
            }
            else{
                if(day>=1 && day<=28){
                    printf("The date is valid, BRAVO!!");
                }
                else{
                    printf("The date is invalid");
                }
            }
        }

    }
    else{
        printf("Invalid date");
    }
}