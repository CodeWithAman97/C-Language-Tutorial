#include<stdio.h>
int main(){
    int n ;
    int copyofN = n;
    int count=0;
    printf("Enter a num : ");
    scanf("%d",&n);

    while(n>0){
        int remainder = n%10;
        n=n/10;
        count++;
    }
    printf("Number of digits in the number is %d" ,count );


    printf("\nAman Kumar[525110031]");
    return 0;
}