#include <stdio.h>
int main(){
    char operation;
    int number1,number2;
    printf("Enter operation : ");
    scanf("%c",&operation);
    printf("Enter 1 st number : ");
    scanf("%d",&number1);
    printf("Enter 2 nd number : ");
    scanf(" %d",&number2);
    if(operation=='+'){
        printf("Answer : %d",number1+number2);
    }
    else if(operation=='-'){
        printf("Answer : %d",number1-number2);
    }
    else if(operation=='*'){
        printf("Answer : %d",number1*number2);
    }
    else if(operation=='/'){
        printf("Answer : %d",number1/number2);
    }
    else{
        printf("Invalid input.");
    } 
    return 0;
}