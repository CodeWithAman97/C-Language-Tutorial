#include<stdio.h>
int main (){
    int num;
    printf("YOu can Enter numbers until you enter a positive num: ");
    while(1){
        
        scanf("%d",&num);
        printf("Enter again: ");
        if(num>0){
            break;
        } 
    }
    printf("program terminated");
    return 0;
}