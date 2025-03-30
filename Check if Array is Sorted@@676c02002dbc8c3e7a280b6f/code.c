#include <stdio.h>

int main(){
    int n, sort = 1;
    scanf("%d", &n);
    int arr[n];

    for (int i = 0; i<n ; i++){
        scanf("%d", &arr[i]);
    }

    for (int i = 1; i<n; i++){
        if (arr[i] < arr[i-1]){
            sort = 0;
            break;
        }
        }
        if (sort){
            printf("Sorted");
        }
        else{
            printf("Not Sorted");
        }
        return 0;
    }