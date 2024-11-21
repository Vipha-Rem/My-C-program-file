#include<stdio.h>
#include<string.h>
int main(){
    printf("Verify the words if it's palindrome.\n");
    char word[20];
    printf("Enter your word:"); scanf("%s", &word);
    int count=strlen(word);
    if(word[0]==word[count-1]){
        strrev(word);
        printf("Your word after reverse is %s\n", word);
        printf("Thus %s is palindrome", word);
    }
    else{
        printf("%s is not palindrome", word);
    } 
}