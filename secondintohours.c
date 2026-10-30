#include <stdio.h>
void main(){
    int seconds,minutes,hours;
    printf("Enter number of seconds : ");
    scanf("%d", &seconds);
    minutes = seconds/60;
    hours = minutes/60;
    minutes = minutes%60;
    seconds = seconds%60;
    printf("Hours = %d\nMinutes = %d\nSeconds = %d",hours,minutes,seconds);
}