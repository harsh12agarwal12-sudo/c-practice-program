#include <stdio.h>
int main(){
    char character;
    printf("Enter character : ");
    character = getchar();
    if((character>=0 && character<=31) || character==127){
        printf("%c is control character.",character);
    }
    else{
        printf("%c is printable character.",character);
    }
    return 0;
}