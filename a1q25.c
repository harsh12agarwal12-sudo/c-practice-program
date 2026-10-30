#include <stdio.h>
int main(){
    char character;
    printf("Enter alphabet : ");
    scanf("%c",&character);
    if(character>='A' && character<='Z'){
        printf("In lower case : %c",character+32);
    }
    else if(character>='a' && character<='z'){
        printf("In upper case : %c",character-32);
    }
    else{
        printf("Invalid input.");
    }
    return 0;
}