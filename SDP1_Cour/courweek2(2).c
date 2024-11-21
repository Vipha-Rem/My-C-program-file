#include<stdio.h>
#include<string.h>

int main (){

    char word[10];
    printf("Enter the word:");
    scanf("%s", &word);

    printf("%s, ", strupr(word));
    printf("%s", strlwr(word));

}