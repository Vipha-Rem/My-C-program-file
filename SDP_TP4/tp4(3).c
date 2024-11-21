#include<stdio.h>
#include<string.h>
int main(){

    printf("Rock Paper Scissors program\n");
    char n1[10], n2[10];
    printf("Enter option (Rock Paper Scissors) of player 1:"); scanf("%s", &n1);
    printf("Enter option (Rock Paper Scissors) of player 2:"); scanf("%s", &n2);

    if(strcmp(n1,"rock")==0 && strcmp(n2,"paper")==0){
        printf("Player 2 wins.");
    }
    else if(strcmp(n1,"rock")==0 && strcmp(n2,"scissors")==0){
        printf("Player 1 wins.");
    }
    else if(strcmp(n1,"paper")==0 && strcmp(n2,"rock")==0){
        printf("Player 1 wins.");
    }
    else if(strcmp(n1,"paper")==0 && strcmp(n2,"scissors")==0){
        printf("Player 2 wins.");
    }
    else if(strcmp(n1,"scissors")==0 && strcmp(n2,"paper")==0){
        printf("Player 1 wins.");
    }
    else if(strcmp(n1,"scissors")==0 && strcmp(n2,"rock")==0){
        printf("Player 2 wins.");
    }
    else if(strcmp(n1,"rock")==0 && strcmp(n2,"rock")==0){
        printf("Player 1 & 2 are equal.");
    }
    else if(strcmp(n1,"scissors")==0 && strcmp(n2,"scissors")==0){
        printf("Player 1 & 2 are equal.");
    }
    else if(strcmp(n1,"paper")==0 && strcmp(n2,"paper")==0){
        printf("Player 1 & 2 are equal.");
    }
    else{
        printf("Invalid input!!");
    }
}