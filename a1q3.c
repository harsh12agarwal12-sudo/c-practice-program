#include <stdio.h>
int main(){
    int number;
    printf("Enter number you want to know even or odd : ");
    scanf("%d",&number);
    if(number%2==0){
        printf("Number %d is even.",number);
    }
    else{
        printf("Number %d is odd.",number);
    }
    return 0;
}