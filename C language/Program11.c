#include <stdio.h>
int main(){

    //WAP to make a simple calculator using switch case statement
    float num1 ;
    float num2;
    int operation;

    printf("Enter two numbers :");
    scanf("%f %f",&num1, &num2);

    printf("Enter the operation you want to perform. Press the corresponding key as mentioned: : +(1) ,-(2) ,* (3), /(4),");
    scanf("%d",&operation);

    switch(operation){
        case 1 : printf("%f + %f = %f",num1,num2,num1+num2);
                   break;
        case 2 : printf("%f - %f = %f",num1,num2,num1-num2);
                   break;
        case 3 : printf("%f * %f = %f",num1,num2,num1*num2);
                   break;
        case 4 : printf("%f / %f = %f",num1,num2,num1/num2);
                   break;
    }


    return 1;
}