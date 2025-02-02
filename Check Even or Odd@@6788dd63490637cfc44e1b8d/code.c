#include <stdio.h>

char* welcome() {
    int i;
    scanf("%d",&i);
    if(i%2==0){
        printf("Even");
    }
    else{
        printf("Odd");
    }

}