#include <stdio.h>

int main(){
    int i,j,k;
    scanf("%d %d %d",&i,&j,&k);
    if(i==j && j==k){
        printf("Euivalateral");
    }
    else if((i==j && j!=k) || (i!=j && j==k) || (i==k && k!=j) ){
        printf("Isosceles");
    }
    else if(i!=j || i!=j || i!=){
        printf("Scalene");
    }
}