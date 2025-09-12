#include<stdio.h>
#include <math.h>
int main(){
    int n;
    int copyOfN = n;
    int count;
    int armstrong=0;

    printf("Enter a num : ");
    scanf("%d",&n);

    while(n>0){
        n = n/10 ;
        count++  ;
    }
    n= copyOfN;
    while(n>0){
        int remainder = n%10;
        copyOfN=copyOfN/10;
        armstrong = armstrong + pow(remainder , count);
    }

    if(n==armstrong){
        printf("Armstrong");
    }
    else{
        printf("Not an Armstrong");
    }
     

    printf("\nAman Kumar[525110031]");


    return 0;
}