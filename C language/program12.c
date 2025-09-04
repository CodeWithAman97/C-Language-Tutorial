#include<stdio.h>
int main(){
    int num ;
    int sum=0;
    printf("Enter a num: ");
    scanf("%d" ,&num);

    for(int i=1;i<=num;i++){
        sum = sum+i;
    }
    printf("%d",sum);


    printf("\n\nAman Kumar 525110031");
    return 0;
}