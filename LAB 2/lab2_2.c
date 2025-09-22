#include <stdio.h>

long long factorial(int n) {
	long long result = 1;
	int i = n;
	while (i > 1) {
		result *= i;
		i--;
	}
	return result;
}

int main() {
	int n;
	printf("Enter an integer: ");
	if (scanf("%d", &n) != 1) {
		printf("Invalid input.\n");
		return 1;
	}
	if (n < 0) {
		printf("Error: Factorial is not defined for negative integers.\n");
		return 1;
	}
	printf("%d! = %lld\n", n, factorial(n));
	return 0;
}