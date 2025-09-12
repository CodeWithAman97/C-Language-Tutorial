#include<stdio.h>
void main(){
    int a[5] = {5,8,6,9,3};
    int *p = a;

    for(int i=0;i<5;i++){
        printf("p[%d] = %d , " , i , *(p+i));
    }
}