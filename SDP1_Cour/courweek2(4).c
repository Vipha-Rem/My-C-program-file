#include<stdio.h>
#include<string.h>
int main(){
    char words[100];

        printf("Enter a word: "); scanf("%s", &words);

        int len=strlen(words);

        printf("First character of '%s' is '%c'", words, words[0]);
        printf("\nLast character of '%s' is '%c'", words, words[len-1]);
    
}