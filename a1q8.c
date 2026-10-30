#include <stdio.h>
int main(){
    float number1,number2,number3;
    printf("Enter 1 st number : ");
    scanf("%f",&number1);
    printf("Enter 2 nd number : ");
    scanf("%f",&number2);
    printf("Enter 3 rd number : ");
    scanf("%f",&number3);
    if(number1==number2 && number2==number3){
        printf("All numbers are equal.");
    }
    else if(number1>number2){
        if(number1>number3){
            printf("%f number is greatest.",number1);
        }
        else{
            printf("%f number is greatest.",number3);
        }
    }
    else{
        if(number2>number3){
            printf("%f number is greatest.",number2);
        }
        else{
            printf("%f number is greatest.",number3);
        }
    }
    return 0;
}