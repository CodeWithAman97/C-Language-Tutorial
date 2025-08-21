#include <stdio.h>
int main(){
    int num ;
    printf("Enter a integral number :");
    scanf("%d", &num);
    printf("The entered number is %d\n\n",num);


    char characterInput ;
    printf("Enter a character input: ");
    scanf(" %c",&characterInput); //if we don't give a space here then it will take new line as input in the character part
    printf("The Entered charcter is : %c\n\n",characterInput);

    float realValueInput;
    printf("Enter a real value input : ");
    scanf("%f",&realValueInput);
    printf("The Entered real value input is %f\n\n",realValueInput);

    double doubleInput;
    printf("Enter a double value input: ");
    scanf("%lf",&doubleInput);
    printf("The Entered double value input is: %lf\n\n",doubleInput);


    unsigned int unsignedIntInput ;
    printf("Enter an unsigned integer as input here: ");
    scanf("%u",&unsignedIntInput);
    printf("The Entered unsigned integer is %u\n\n",unsignedIntInput);
    
    int octalInput;
    printf("Enter a octal value : ");
    scanf("%o",&octalInput);
    printf("The entered octal value is : %o\n\n" , &octalInput);

    char stringInput[4] ;
    printf("Enter a four letter name: ");
    scanf("%s",&stringInput);
    printf("The entered stringInput is : %s",stringInput);


    return 0;

}