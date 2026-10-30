#include <stdio.h>
int main(){
    char character1,character2;
    printf("Enter 1 st character : ");
    scanf("%c",&character1);
    printf("Enter 2 nd character : ");
    scanf(" %c",&character2);
    if(character1==character2){
        printf("Both are same.");
    }
    else if((character1>='A' && character1<='Z') || (character1>='a' && character1<='z')){
        if((character2>='A' && character2<='Z') || (character2>='a' && character2<='z')){
            if(character1+32==character2 || character1==character2+32 || character1-32==character2 || character1==character2-32){
                printf("Both are same.");
            }
            else{
                printf("Not same.");
            }
        }
        else{
            printf("Not same.");
        }
    }
    else{
        printf("Not same.");
    }
    return 0;
}