#include <stdio.h>
int main(){
    float a,b,c;
    printf("Format is : a*(x*x)+b*x+c\n");
    printf("Enter value of a : ");
    scanf("%f",&a);
    printf("Enter value of b : ");
    scanf("%f",&b);
    printf("Enter value of c : ");
    scanf("%f",&c);
    if(((b*b)-(4*a*c))>0){
        printf("Quadratic equation has real and distinct roots.");
    }
    else if(((b*b)-(4*a*c))==0){
        printf("Quadratic equation has real and equal roots.");
    }
    else{
        printf("Quadratic equation has imaginary roots.");
    }
    return 0;
}