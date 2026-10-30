#include <stdio.h>
int main(){
    float side1,side2,side3;
    printf("Enter length of 1 st side : ");
    scanf("%d",&side1);
    printf("Enter length of 2 nd side : ");
    scanf("%d",&side2);
    printf("Enter length of 3 rd side : ");
    scanf("%d",&side3);
    if(side1==side2){
        if(side2==side3){
            printf("This is an equilateral triangle.");
        }
        else{
            printf("This is an isosceles triangle.");
        }
    }
    else{
        if(side2==side3 || side3==side1){
            printf("This is an isosceles triangle.");
        }
        else{
            printf("This is an scalene triangle.");
        }
    }
    return 0;
}