#include <stdio.h>

int swap(int num1 , int num2){
    int temp = num1;
    num1 = num2;
    num2 = temp;

    printf("SwappedValues: ");
    printf("num1 = %d\n" ,num1);
    printf("num2 = %d" , num2);
}

void main (){
    int num1;
    int num2;
    printf("Enter num1: \n");
    scanf("%d" , &num1);

    printf("Enter num2: ");
    scanf("%d" , &num2);

    swap(num1,num2);
}