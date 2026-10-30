#include <stdio.h>
int main(){
    char character;
    printf("Enter chracter : ");
    scanf("%c",&character);
    if(character>='A' && character<='Z'){
        printf("%c alphabet is upper case.",character);
    }
    else if(character>='a' && character<='z'){
        printf("%c alphabet is lower case.",character);
    }
    else{
        printf("Invalid input.");
    }
    return 0;
}