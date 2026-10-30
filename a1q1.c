#include <stdio.h>
int main(){
    float number;
    printf("Enter number you want to check positive or negative : ");
    scanf("%f",&number);
    if(number<0){
        printf("Number %f is a negative number.",number);
    }
    if(number>=0){
        printf("Number %f is a positive number.",number);
    }
    return 0;
}