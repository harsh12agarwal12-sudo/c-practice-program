#include <stdio.h>
int main(){
    int units;
    printf("Enter total units : ");
    scanf("%d",&units);
    if(units>=0 && units<=50){
        printf("Your total bill is : %f",units*2.20);
    }
    else if(units>=51 && units<=100){
        printf("Your total bill is : %f",(50*2.20)+((units-50)*2.70));
    }
    else if(units>100){
        printf("Your total bill is : %f",(50*2.20)+(50*2.70)+((units-100)*2.80));
    }
    else{
        printf("Invalid input.");
    }
}