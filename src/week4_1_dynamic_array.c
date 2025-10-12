#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int n;
    printf("Enter number of elements: ");
    if (scanf("%d", &n) != 1 || n <= 0) return 0;

    int *a = (int *)malloc(n * sizeof(int));
    if (!a) {
        printf("Memory allocation failed\n");
        return 1;
    }

    printf("Enter %d integers: ", n);
    long long sum = 0;
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
        sum += a[i];
    }

    double avg = (double)sum / n;
    printf("Sum = %lld\n", sum);
    printf("Average = %.2f\n", avg);

    free(a);
    return 0;
}
