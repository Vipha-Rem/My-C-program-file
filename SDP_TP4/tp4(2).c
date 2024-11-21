#include<stdio.h>
#include<math.h>

int main(){

    int num1, num2, num3, num4;
    printf("Enter four numbers:");
    scanf("%i %i %i %i", &num1, &num2, &num3, &num4);

    if(num1<=num2 && num1<=num3 && num1<=num4){
        printf("Among (%i, %i, %i, %i) the smallest number is %i", num1, num2, num3, num4, num1);
    }
    else if(num2<=num1 && num2<=num3 && num2<=num4){
        printf("Among (%i, %i, %i, %i) the smallest number is %i", num1, num2, num3, num4, num2);
    }
    else if(num3<=num1 && num3<=num2 && num3<=num4){
        printf("Among (%i, %i, %i, %i) the smallest number is %i", num1, num2, num3, num4, num3);
    }
    else{
        printf("Among (%i, %i, %i, %i) the smallest number is %i", num1, num2, num3, num4, num4);
    }

}