#include <stdio.h>
int main(){
    int number1,number2;
    printf("Enter value of 1 st number : ");
    scanf("%d",&number1);
    printf("Enter value of 2 nd number : ");
    scanf("%d",&number2);
    (number1>number2)?printf("%d number is greater.",number1):printf("%d number is greater.",number2);
    return 0;
}