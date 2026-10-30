#include <stdio.h>
int main(){
    float number;
    printf("Enter number you want to know positive,negative or 0 : ");
    scanf("%f",&number);
    if(number<0){
        printf("%f number is negative.",number);
    }
    else{
        if(number>0){
            printf("%f number is positive.",number);
        }
        else{
            printf("Number is 0.");
        }
    }
    return 0;
}