#include<stdio.h>
int main(){
    int num;
    int flag;
    printf("Enter a number: ");
    scanf("%d",&num);
    if(num==1){
        printf("Not Prime");
    }
    else{
        for(int i=2;i<num/2+1;i++){
        if(num%i==0){
            flag=0;
            break;
        }
        flag=1;
        }
    }
    if(flag){
        printf("Prime");
    }
    else{
        printf("Not Prime");
    }

    printf("\n\nAman Kumar 525110031");
    
    return 0;
}