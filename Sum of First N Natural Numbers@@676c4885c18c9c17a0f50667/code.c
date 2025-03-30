#include <stdio.h>

int main(){
//     int num;
//     scanf("%d", &num);
//    printf("%d", (num*(num+1))/2);
//    return 0;

    int n,sum=0;
    scanf("%d", &n);
    for( int i = 1; i<=n; i++){
        sum=sum+i;
    }
    printf("%d", sum);
}