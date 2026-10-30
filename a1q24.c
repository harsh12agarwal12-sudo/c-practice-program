#include <stdio.h>
int main(){
    char character;
    printf("Enter charecter you want to check alphabet,digit or special charecter : ");
    scanf("%c",&character);
    if((character>='a' && character<='z')||(character>='A' && character<='Z')){
        printf("%c is alphabet.",character);
    }
    else if(character>='0' && character<='9'){
        printf("%c is digit.",character);
    }
    else{
        printf("%c is special character.",character);
    }
    return 0;
}