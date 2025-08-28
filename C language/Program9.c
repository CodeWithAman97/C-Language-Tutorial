#include<stdio.h>
void main(){
    int user_input;
    printf("Enter an integral num: ");
    scanf("%d",&user_input);

    if(user_input%2==0){
        printf("Even Num");
    }
    else{
        printf("ODD Num");
    }
}