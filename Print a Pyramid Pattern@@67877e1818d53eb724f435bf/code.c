#include <stdio.h>

int main() {
    int i, j, k, n;
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        // Print spaces
        for (j = 1; j <= n - i; j++) {
            printf(" ");
        }

        // Print stars
        for (k = 1; k <= 2 * i - 1; k++) {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}
