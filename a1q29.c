#include <stdio.h>
int main(){
    char grade;
    printf("Enter your grade : ");
    scanf("%c",&grade);
    if(grade=='a' || grade=='A'){
        printf("Excellent.");
    }
    else if(grade=='b' || grade=='B'){
        printf("Good.");
    }
    else if(grade=='c' || grade=='C'){
        printf("Average.");
    }
    else if(grade=='d' || grade=='D'){
        printf("Below average.");
    }
    else if(grade=='f' || grade=='F'){
        printf("Fail.");
    }
    else{
        printf("Invalid input");
    }
    return 0;
}