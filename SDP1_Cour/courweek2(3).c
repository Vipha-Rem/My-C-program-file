#include<stdio.h>
#include<string.h>

int main(){
    char word[100];
    printf("Enter a word to find the length of string: "); scanf("%s", &word);

    int len=strlen(word);
    printf("The length of the word %s is %i", word, len);
}
