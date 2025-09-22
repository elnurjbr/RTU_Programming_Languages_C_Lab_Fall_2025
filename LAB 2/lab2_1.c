#include <stdio.h>

int sum_to_n(int n) {
    return n * (n + 1) / 2;
}

int main () {
    int n;
    printf("Enter n:");
    scanf("%d", &n);

    if (n < 1) {
        printf("Error : n must ne >= 1\n");
    } else {
        printf("Sum 1. .%d = %d\n", n,  sum_to_n(n));

    }
         
    return 0;
    }
