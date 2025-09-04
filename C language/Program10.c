#include<stdio.h>
int main(){
    int a = 100;
    int b=45;
    int c = 11;

    if(a>b && a>c){
        printf("%d is greatest",a);
    }
    else if(b>c){
        printf("%d is greatest",b);

    }
    else{
        printf("%d is greatest" ,c );
    }

    printf("\nAman Kumar 525110031");

    return 0;
}