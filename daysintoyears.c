#include <stdio.h>
void main(){
    int days,months,year;
     printf("Enter number of days : ");
     scanf("%d", &days);
     months = days/30;
     year = months/12;
     days = days%30;
     months = months%12;
     printf("Years = %d\nMonths = %d\nDays = %d",year,months,days);
}