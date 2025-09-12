#include<stdio.h>
void main(){
    int a[5] = {1,2,3,4,5};
    // int *p[] = {6,7,8,9,10};
    // int *p = a;
    

    int *p[5];
    for(int i=0;i<5;i++){
        p[i] = &a[i];
    }
    // int *p[5] = {&a[0] , &a[1] , &a[2] , &a[3] , &a[4]};


    // printf("%u\n" ,a );
    // printf("%u\n" ,&a[0] );
    // printf("%u\n" ,p[0] );
    // printf("%u\n" ,p );
    // printf("%u\n" ,&p );

    int **pp = p;
    

    // ++*p;
    pp++;
    printf("%u\n" , p);
    printf("%u\n",&p);
    printf("%u\n" , pp);
    printf("%u\n" , &pp);

    // printf("%u \n",pp);
    // printf("%u \n" , p);
    // printf("%u \n",&p);

    printf("pp-p = %d  \n" , pp-p);//1
    printf("*pp-a = %u \n" , *pp-a);//1
    printf("**pp = %d \n" , **pp);//2
    printf("%d" , ++*pp);
    printf("%d" , ++**pp);

    

}
