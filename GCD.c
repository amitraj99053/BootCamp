// find gcd using recursion 

#include <stdio.h>

int gcd(int a, int b) {
    if (b == 0) {
        return a; // Base case: GCD(a, 0) = a
    } else {
        return gcd(b, a % b); // Recursive step: GCD(a, b) = GCD(b, a % b)
    }
}

int main() {
    int num1, num2;

    printf("Enter two positive integers: ");
    scanf("%d %d", &num1, &num2);

    if (num1 < 0 || num2 < 0) {
        printf("GCD is not defined for negative numbers.\n");
        return 1; // Indicate an error
    }

    int result = gcd(num1, num2);
    printf("GCD of %d and %d is: %d\n", num1, num2, result);

    return 0; // Indicate successful execution
}