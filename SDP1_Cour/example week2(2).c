#include<stdio.h>
#include<string.h>
int main (){

    char word[10];
    printf("Enter the word:");
    scanf("%s", &word);

    char up[10]=stru(word);
    char low[10]=strlwr(word);

    printf("%s,%s", up, low);


}
