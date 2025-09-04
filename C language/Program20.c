#include<stdio.h>
int main(){
    //Palindrome Number
    int n;
    int reverseNum=0;

    printf("Enter a num : ");
    scanf("%d",&n);

    while(n>0){
        int remainder = n%10;
        reverseNum = reverseNum *10 +remainder;
        n = n/10;

    }
    printf("Reverse Number : %d\n", reverseNum);
    if(reverseNum == n){
        printf("Palindrome");
    }
    else{
        printf("Not A Palindrome");
    }



    return 0;
}