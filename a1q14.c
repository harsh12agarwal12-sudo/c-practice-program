 #include <stdio.h>
int main(){
    float weight,height;
    printf("Enter weight in kg : ");
    scanf("%f",&weight);
    printf("Enter height in (m*m) : ");
    scanf("%f",&height);
    if(weight/height<18.5){
        printf("Person is under weight.");
    }
    else if(weight/height>=18.5 && weight/height<=24.9){
        printf("Person is normal.");
    }
    else if(weight/height>=25 && weight/height<=29.9){
        printf("Person is overweight.");
    }
    else{
        printf("Person is obese.");
    }
    return 0;
}