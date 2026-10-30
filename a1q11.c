#include <stdio.h>
int main(){
    float marks;
    printf("Enter your marks : ");
    scanf("%f",&marks);
    if(marks>=90){
        printf("Your grade is : A.");
    }
    else if(marks<=89 && marks>=75){
        printf("Your grade is : B.");
    }
    else if(marks<=74 && marks>=60){
        printf("Your grade is : C.");
    }
    else if(marks<=59 && marks>=40){
        printf("Your grade is : D.");
    }
    else if(marks<40){
        printf("Your grade is : F.");
    }
    else{
        printf("Invalid input");
    }
    return 0;
}