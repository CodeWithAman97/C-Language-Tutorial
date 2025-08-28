#include<stdio.h>
int main(){
    //factorial
    int num;
    int factorial=1;
    printf("Enter the number you to find the factorial of: ");
    scanf("%d",&num);
    
    if(num==0){
        printf("Factorial of %d is 1",num);
    }
    else{
        for(int i=num;i>0;i--){
            factorial = factorial*i;
        }
        printf("Factorial of %d is %d",num , factorial);
    }

    
    
    return 0;
}