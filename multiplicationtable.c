#include <stdio.h>
void main(){
    int number,term,i;
    printf("Enter number you want multiplication table of : ");
    scanf("%d", &number);
    printf("Enter number of term you want in table : ");
    scanf("%d", &term);
    for(i=1 ;i<=term ;i++){
        printf("%d X %d = %d\n",number,i,number*i);
    }
}