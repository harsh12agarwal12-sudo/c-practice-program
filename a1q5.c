#include <stdio.h>
int main(){
    char alphabet;
    printf("Enter the alphabet you want to check vowel and consonant : ");
    scanf("%c",&alphabet);
    if(alphabet=='a' || alphabet=='e' || alphabet=='i' || alphabet=='o' || alphabet=='u' || alphabet=='A' || alphabet=='E' || alphabet=='I' || alphabet=='O' || alphabet=='U'){
        printf("alphabet %c is vowel.",alphabet);
    }
    else{
        printf("alphabet %c is consonant.",alphabet);
    }
    return 0;
}