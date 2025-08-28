#include <stdio.h>
void main(){
    //program to convert farenheit to celsius
    //formula c= 5/9(f-32)

    printf("Enter data in farenheit: ");
    float farenheit_input;
    scanf("%f",&farenheit_input);

    float celsius_result = ((float)5/9)*(farenheit_input-32);
    printf("Farenheit to celsius of %f is %f" , farenheit_input , celsius_result);

}