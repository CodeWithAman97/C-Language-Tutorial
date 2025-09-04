#include<stdio.h>
int main(){
    int n;

    printf("Enter a num : ");
    scanf("%d",&n);

    for(int i=0;i<n;i++){
        for(int space=0 ; space < n-i ; space++){
            printf(" ");
        }

        //star
        for(int star=0;star<2*i+1;star++){
            printf("*");
        }
        printf("\n");
    }

    return 0;
}