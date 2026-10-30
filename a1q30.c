#include <stdio.h>
int main(){
    char character;
    printf("Enter character : ");
    character = getchar();
    if(character ==' '){
        printf("It's a space.");
    }
    else if(character == '\t'){
        printf("It's a tab.");
    }
    else if(character == '\n'){
        printf("It's a new line.");
    }
    else{
        printf("Invalid input.");
    }
    return 0;
}