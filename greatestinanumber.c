#include <stdio.h>
int greatest(int n){
    int digit,max=0;
    while(n>0){
        digit=n%10;
        n=n/10;
        if(max<digit){
            max=digit;
        }
    }
    return max;
}
int main(){
    int number;
    printf("Enter number: ");
    scanf("%d",&number);
    printf("%d",greatest(number));
    return 0;
}