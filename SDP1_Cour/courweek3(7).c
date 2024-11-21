#include<stdio.h>
#include<time.h>
int main (){

    srand(time(0));
    int n;
    int min=1, max=100;

    n=rand()%max+min;
    //part1
    int number;
    int time=0;
    do{
        printf("Enter your guessing number:"); scanf("%i", &number);
        time=time+1;
        if(number>n){
            printf("your predicted number is too big.\n");
        }
        else if(number<n){
            printf("your predicted number is too small.\n");
        }else{
            printf("you got it.\n");
            printf("you're guessing %i", time);
        }
    }while(number !=n);

}