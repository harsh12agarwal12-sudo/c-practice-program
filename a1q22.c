#include <stdio.h>
int main(){
    int number1,number2,number3;
    printf("Enter 1 st number : ");
    scanf("%d",&number1);
    printf("Enter 2 nd number : ");
    scanf("%d",&number2);
    printf("Enter 3 rd number : ");
    scanf("%d",&number3);
    printf("%d number is greatest.",(number1>number2)?((number1>number3)?number1:number3):((number2>number3)?number2:number3));
    return 0;
}