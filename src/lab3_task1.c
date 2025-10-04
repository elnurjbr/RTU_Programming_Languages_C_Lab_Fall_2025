#include <stdio.h>

int array_min(int arr[], int size);
int array_max(int arr[], int size);
int array_sum(int arr[], int size);
float array_avg(int arr[], int size);

int array_min(int arr[], int size) {
    int m = arr[0];
    for (int i = 1; i < size; i++) if (arr[i] < m) m = arr[i];
    return m;
}

int array_max(int arr[], int size) {
    int m = arr[0];
    for (int i = 1; i < size; i++) if (arr[i] > m) m = arr[i];
    return m;
}

int array_sum(int arr[], int size) {
    int s = 0;
    for (int i = 0; i < size; i++) s += arr[i];
    return s;
}

float array_avg(int arr[], int size) {
    return (float)array_sum(arr, size) / (float)size;
}

int main() {
    int arr[] = {10, 20, 5, 30, 15};
    int n = 5;
    printf("Min: %d\n", array_min(arr, n));
    printf("Max: %d\n", array_max(arr, n));
    printf("Sum: %d\n", array_sum(arr, n));
    printf("Avg: %.2f\n", array_avg(arr, n));
    return 0;
}
