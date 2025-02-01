// find the sum of digits of a number using recursion

#include <stdio.h>

int sumOfDigits(int n) {
    if (n == 0) {
        return 0; // Base case: sum of digits of 0 is 0
    } else {
        return (n % 10) + sumOfDigits(n / 10); // Recursive step
    }
}

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num < 0) {
        printf("Sum of digits is not defined for negative numbers (in this implementation).\n");
        return 1; // Indicate an error
    }

    int sum = sumOfDigits(num);
    printf("Sum of digits of %d is: %d\n", num, sum);

    return 0; // Indicate successful execution
}