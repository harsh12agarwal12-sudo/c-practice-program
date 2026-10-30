#include <stdio.h>
int main(){
    char username='H',iusername,password='a',ipassword;
    printf("Enter username : ");
    scanf("%c",&iusername);
    printf("Enter password : ");
    scanf(" %c",&ipassword);
    if(iusername=='H'){
        if(ipassword=='a'){
            printf("Access Granted.");
        }
        else{
            printf("Access Denied.\nWrong password.");
        }
    }
    else{
        printf("Access Denied.\nWrong username.");
    }
}