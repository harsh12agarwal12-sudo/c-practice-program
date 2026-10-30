#include <stdio.h>
int main(){
    int number;
    printf("Enter number : ");
    scanf("%d",&number);
    if(number==1){
        printf("It's Sunday.");
    }
    else if(number==2){
        printf("It's Monday.");
    }
    else if(number==3){
        printf("It's Tuesday.");
    }
    else if(number==4){
        printf("It's wednesday.");
    }
    else if(number==5){
        printf("It's Thrusday.");
    }
    else if(number==6){
        printf("It's Friday.");
    }
    else if(number==7){
        printf("It's saturday.");
    }
    else{
        printf("Invaid input");
    }
    return 0;
}