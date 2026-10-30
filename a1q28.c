#include <stdio.h>
int main(){
    char character;
    printf("Enter character : ");
    scanf("%c",&character);
    if (character=='.'){
        printf("%c is punctuation mark",character);
    }
    else{
        if (character==','){
            printf("%c is punctuation mark",character);
        }
        else{
            if (character=='!'){
                printf("%c is punctuation mark",character);
            }
            else{
                if (character=='.'){
                    printf("%c is punctuation mark",character);
                }
                else{
                    printf("%c is not punctuation mark",character);
                }
            }
        }
    }
    return 0;
}