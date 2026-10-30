#include <stdio.h>
void main(){
    float principle,time,rate;
    printf("Enter principle value : ");
    scanf("%f", &principle);
    printf("Enter time period : ");
    scanf("%f", &time);
    printf("Enter rate of intrust : ");
    scanf("%f", &rate);
    printf("Sinple interest is : %f",(principle*rate*time/100));
}