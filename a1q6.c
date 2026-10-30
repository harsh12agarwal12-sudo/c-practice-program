#include <stdio.h>
int main(){
    float number1,number2;
    printf("Enter 1 st number : ");
    scanf("%f",&number1);
    printf("Enter 2 nd number : ");
    scanf("%f",&number2);
    if(number1==number2){
        printf("Both number are equal.");
    }
    if(number1>number2){
        printf("%f is greater number.",number1);
    }
    else{
        printf("%f is greater number.",number2);
    }
    return 0;
}