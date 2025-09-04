#include<stdio.h>
int main(){
    //fabonacci sequence 0 1 1 2 3 5 8 13
    int n;
    int result;
    printf("Enter the how many fabonacci series numbers you want to print: ");
    scanf("%d",&n);

    if(n==1){
        printf("0");

    }
    else if(n==2){
        printf("0 1");
    }

    else{

        int first = 0;
        int second = 1;
        printf("%d ",first);
        printf("%d ",second);
        for(int i=0;i<n;i++){
            result = first+second;
            printf("%d ",result);
            first = second;
            second = result;
        }

    }
    




    return 0;
}