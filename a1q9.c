#include <stdio.h>
int main(){
    float side1,side2,side3;
    printf("Enter length of 1 st side : ");
    scanf("%f",&side1);
    printf("Enter length of 2 nd side : ");
    scanf("%f",&side2);
    printf("Enter length of 3 rd side : ");
    scanf("%f",&side3);
    if(side1+side2>side3){
        if(side2+side3>side1 && side3+side1>side2){
            printf("This is a valid triangle.");
        }
        else{
            printf("This is a invalid triangle.");
        }
    }
    else{
        printf("This is a invalid triangle.");
    }
    return 0;
}