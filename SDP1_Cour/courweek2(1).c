#include<stdio.h>
#include<string.h>
 
int main (){

    char name[10];
    char course[10];

    printf("Enter your name: ");
    scanf("%s", &name);
    printf("Enter your course name: ");
    scanf("%s", &course);

    strcat(name," to course ");
    strcat(name, course);

    printf("welcome %s", name);

}