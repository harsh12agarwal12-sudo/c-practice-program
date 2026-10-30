#include <stdio.h>
int main(){
    int number;
    printf("Enter number you want to check is divisible by 5 : ");
    scanf("%d",&number);
    if (number%5==0){
        printf("Number %d is divisible by 5.",number);
    }
    if(number%5!=0){
        printf("Number %d is not divisible by 5.",number);
    }
    return 0;
}