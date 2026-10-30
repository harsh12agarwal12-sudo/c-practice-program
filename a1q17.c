#include <stdio.h>
int main(){
    int number;
    printf("Enetr number you want to check positive,negative or zero : ");
    scanf("%d",&number);
    (number<0)?(printf("%d number is negative.",number)):((number>0)?(printf("%d number is positive.",number)):printf("Number is 0."));
    return 0;
}