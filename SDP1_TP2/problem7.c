#include<stdio.h>
#include<string.h>

int main(){

    char first[15],last[10];

    printf("Enter your firstname:");
    scanf("%s",first);

    printf("Enter your lastname:");
    scanf("%s",last);


    int countf=strlen(first);

    strcat(first, "_");
    strcat(first, last);

    printf("%s\n", first);

    int countl=strlen(last);

    printf("Total character of last name is %i and first name is %i.\n", countl, countf);

    printf("first character of last name is %c\n", last[0]);
    printf("last char racter of last name is %c\n", first[countf-1]);
}
